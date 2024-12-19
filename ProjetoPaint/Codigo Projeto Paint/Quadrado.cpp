#include "Quadrado.h"

// Construtor da classe Quadrado
Quadrado :: Quadrado(int x, int y, int tamanho, Cor cor, int sequencial)
    : ObjetoGrafico(x, y, cor, sequencial), tamanho(tamanho) {
    this->x = x;
    this->y = y;
    this->tamanho = tamanho;
    this->cor = cor;
    this->sequencial = sequencial;
}

// Redimensiona o quadrado
void Quadrado :: redimensionar(int x, int y) {
    this->x = x;
    this->y = y;
}

// Converte o quadrado para uma string
string Quadrado :: toString() {
    ostringstream oss;
    oss << "Quadrado: (" << this->x << ", " << this->y << "), Tamanho: " << this->tamanho << ", Cor: " << corToString(this->cor) << ", Seq: " << this->sequencial;
    return oss.str();
}
