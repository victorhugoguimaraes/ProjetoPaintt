// Aluno: Victor Hugo Guimaraes Nascimento

#ifndef ObjetoGrafico_H
#define ObjetoGrafico_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

// Enumera��o das cores disponiveis
enum Cor {
    PRETO, 
    BRANCO, 
    VERMELHO, 
    AZUL, 
    VERDE
};

// Converte uma cor para uma string
string corToString(Cor cor);

// Classe base abstrata para objetos graficos

class ObjetoGrafico {
protected:
    int x; // Coordenada x do objeto grafico
    int y; // Coordenada y do objeto grafico
    Cor cor; // Cor do objeto grafico
    int sequencial; // Identificador sequencial do objeto grafico
public:
    // Construtor da classe ObjetoGrafico
    ObjetoGrafico(int x, int y, Cor cor = BRANCO, int sequencial = 0);

    // Move o objeto grafico
    virtual void mover(int dx, int dy);

    // Redimensiona o objeto grafico
    virtual void redimensionar(int x, int y) = 0;

    // Converte o objeto grafico para uma string
    virtual string toString() = 0;

    // Define o identificador sequencial do objeto grafico
    void setSequencial(int sequencial);

    // Obtém o identificador sequencial do objeto grafico
    int getSequencial();

    // Destrutor virtual da classe ObjetoGrafico
    virtual ~ObjetoGrafico() = default;
};

#endif
