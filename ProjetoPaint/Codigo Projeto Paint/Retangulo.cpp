#include "Retangulo.h"

// Construtor da classe Retangulo
Retangulo :: Retangulo(int x, int y, int largura, int altura, Cor cor, int sequencial)
    : ObjetoGrafico(x, y, cor, sequencial), largura(largura), altura(altura) {
    this->x = x;
    this->y = y;
    this->largura = largura;
    this->altura = altura;
    this->cor = cor;
    this->sequencial = sequencial;
}

// Redimensiona o retangulo
void Retangulo :: redimensionar(int x, int y) {
    this->largura = x;
    this->altura = y;
}

// Converte o retangulo para uma string
string Retangulo :: toString() {
    ostringstream oss;
    oss << "Retangulo: (" << this->x << ", " << this->y << "), Largura: " << this->largura << ", Altura: " << this->altura << ", Cor: " << corToString(this->cor) << ", Seq: " << this->sequencial;
    return oss.str();
}
