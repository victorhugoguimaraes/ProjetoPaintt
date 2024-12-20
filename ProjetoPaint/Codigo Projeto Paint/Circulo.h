// Autor: Victor Hugo Guimaraes Nascimento, 
#ifndef Circulo_H
#define Circulo_H

#include "ObjetoGrafico.h"

// Classe que representa um circulo
class Circulo : public ObjetoGrafico {
private:
    int raio; // Raio do circulo
public:
    // Construtor da classe Circulo
    Circulo(int x, int y, int raio, Cor cor, int sequencial);

    // Redimensiona o circulo
    void redimensionar(int x, int y) override;

    // Converte o circulo para uma string
    string toString() override;
};

#endif
