// Autor: Victor Hugo Guimaraes Nascimento, 
//Matricula: 232031085
#ifndef Paint_H
#define Paint_H

#include <iostream>
#include <string>
#include <vector>
#include "ObjetoGrafico.h"

using namespace std;

// Classe que gerencia objetos graficos
class Paint {
private:
    string label; // Rotulo do Paint
    int sequencial; // Sequencial para identificar objetos
    vector<ObjetoGrafico*> objetosGraficos; // Vetor de objetos graficos
public:
    // Construtor da classe Paint
    Paint(string label, int sequencial = 1);

    // Destrutor da classe Paint
    ~Paint();

    // Define o rotulo do Paint
    void setLabel(string label);

    // Obtem o rotulo do Paint
    string getLabel();

    // Define o sequencial do Paint
    void setSequencial(int sequencial);

    // Obtem o sequencial do Paint
    int getSequencial();

    // Acrescenta um objeto grafico
    void acrescentar(ObjetoGrafico* objeto);

    // Apaga um objeto grafico pelo sequencial
    void apagar(int sequencial);

    // Apaga todos os objetos graficos
    void apagar();

    // Move um objeto grafico
    void mover(int sequencial, int dx, int dy);

    // Redimensiona um objeto grafico
    void redimensionarObjetoGrafico(int sequencial, int x, int y);

    // Desenha todos os objetos graficos
    void desenhar();

    // Le os dados do Paint de um arquivo
    void ler(string label);

    // Grava os dados do Paint em um arquivo
    void gravar(string label);
};

#endif
