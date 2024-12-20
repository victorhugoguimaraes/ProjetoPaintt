// Autor: Victor Hugo Guimaraes Nascimento
#ifndef Quadrado_H
#define Quadrado_H

#include "ObjetoGrafico.h"

// Classe que representa um quadrado
class Quadrado : public ObjetoGrafico {
private:
    int tamanho; // Tamanho do quadrado
public:
    // Construtor da classe Quadrado
    Quadrado(int x, int y, int tamanho, Cor cor, int sequencial);

    // Redimensiona o quadrado
    void redimensionar(int x, int y) override;

    // Converte o quadrado para uma string
    string toString() override;
};

#endif
