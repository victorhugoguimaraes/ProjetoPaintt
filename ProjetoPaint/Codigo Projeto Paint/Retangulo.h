// Autor: Victor Hugo Guimaraes Nascimento, 
#ifndef Retangulo_H
#define Retangulo_H

#include "ObjetoGrafico.h"

// Classe que representa um retangulo
class Retangulo : public ObjetoGrafico {
private:
    int largura, altura; // Largura e altura do retangulo
public:
    // Construtor da classe Retangulo
    Retangulo(int x, int y, int largura, int altura, Cor cor, int sequencial);

    // Redimensiona o retangulo
    void redimensionar(int x, int y) override;

    // Converte o retangulo para uma string
    string toString() override;
};

#endif
