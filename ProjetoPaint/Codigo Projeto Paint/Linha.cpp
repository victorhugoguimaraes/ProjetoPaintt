#include "Linha.h"

// Construtor da classe Linha
Linha :: Linha(int x, int y, int x2, int y2, Cor cor, int sequencial)
    : ObjetoGrafico(x, y, cor, sequencial), x2(x2), y2(y2) {
    this->x = x;
    this->y = y;
    this->x2 = x2;
    this->y2 = y2;
    this->cor = cor;
    this->sequencial = sequencial;
}

// Redimensiona a linha
void Linha :: redimensionar(int x, int y) {
    this->x2 = x;
    this->y2 = y;
}

// Converte a linha para uma string
string Linha :: toString() {
    ostringstream oss;
    oss << "Linha: (" << this->x << ", " << this->y << ") para (" << this->x2 << ", " << this->y2 << "), Cor: " << corToString(this->cor) << ", Seq: " << this->sequencial;
    return oss.str();
}
