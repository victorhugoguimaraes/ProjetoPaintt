#include "Oval.h"

// Construtor da classe Oval
Oval :: Oval(int x, int y, int largura, int altura, Cor cor, int sequencial)
    : ObjetoGrafico(x, y, cor, sequencial), largura(largura), altura(altura) {
    this->x = x;
    this->y = y;
    this->largura = largura;
    this->altura = altura;
    this->cor = cor;
    this->sequencial = sequencial;
}

// Redimensiona o oval
void Oval :: redimensionar(int x, int y) {
    this->largura = x;
    this->altura = y;
}

// Converte o oval para uma string
string Oval :: toString() {
    ostringstream oss;
    oss << "Oval: (" << this->x << ", " << this->y << "), Largura: " << this->largura << ", Altura: " << this->altura << ", Cor: " << corToString(this->cor) << ", Seq: " << this->sequencial;
    return oss.str();
}
