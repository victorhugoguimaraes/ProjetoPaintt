// Autor: Victor Hugo Guimaraes Nascimento, 
//Matricula: 232031085
#ifndef Linha_H
#define Linha_H

#include "ObjetoGrafico.h"

// Classe que representa uma linha
class Linha : public ObjetoGrafico {
private:
    int x2, y2; // Coordenadas finais da linha
public:
    // Construtor da classe Linha
    Linha(int x, int y, int x2, int y2, Cor cor, int sequencial);

    // Redimensiona a linha
    void redimensionar(int x, int y) override;

    // Converte a linha para uma string
    string toString() override;
};

#endif
