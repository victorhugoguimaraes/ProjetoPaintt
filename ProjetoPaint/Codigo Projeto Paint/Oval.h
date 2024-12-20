// Autor: Victor Hugo Guimaraes Nascimento, 
#ifndef Oval_H
#define Oval_H

#include "ObjetoGrafico.h"

// Classe que representa um oval
class Oval : public ObjetoGrafico {
private:
    int largura, altura; // Largura e altura do oval
public:
    // Construtor da classe Oval
    Oval(int x, int y, int largura, int altura, Cor cor, int sequencial);

    // Redimensiona o oval
    void redimensionar(int x, int y) override;

    // Converte o oval para uma string
    string toString() override;
};

#endif
