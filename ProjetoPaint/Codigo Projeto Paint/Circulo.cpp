#include "Circulo.h"

// Construtor da classe Circulo
Circulo :: Circulo(int x, int y, int raio, Cor cor, int sequencial)
    : ObjetoGrafico(x, y, cor, sequencial), raio(raio) {
    this->x = x;
    this->y = y;
    this->raio = raio;
    this->cor = cor;
    this->sequencial = sequencial;
}

// Redimensiona o circulo
void Circulo :: redimensionar(int x, int y) {
    this->raio = x;
}

// Converte o circulo para uma string
string Circulo :: toString() {
    ostringstream oss;
    oss << "Circulo: Centro (" << this->x << ", " << this->y << "), Raio: " << this->raio << ", Cor: " << corToString(this->cor) << ", Seq: " << this->sequencial;
    return oss.str();
}
