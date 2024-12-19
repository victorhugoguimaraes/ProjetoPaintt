#include "ObjetoGrafico.h"

// Construtor da classe ObjetoGrafico
ObjetoGrafico :: ObjetoGrafico(int x, int y, Cor cor, int sequencial)
    : x(x), y(y), cor(cor == BRANCO ? PRETO : cor), sequencial(sequencial) {
    this->x = x;
    this->y = y;
    this->cor = cor == BRANCO ? PRETO : cor;
    this->sequencial = sequencial;
}

// Move o objeto grafico
void ObjetoGrafico :: mover(int dx, int dy) {
    this->x += dx;
    this->y += dy;
}

// Define o identificador sequencial do objeto grafico
void ObjetoGrafico :: setSequencial(int sequencial) {
    this->sequencial = sequencial;
}

// Obtém o identificador sequencial do objeto grafico
int ObjetoGrafico :: getSequencial() {
    return this->sequencial;
}

// Converte uma cor para uma string
string corToString(Cor cor) {
    switch (cor) {
        case PRETO: return "PRETO";
        case BRANCO: return "BRANCO";
        case VERMELHO: return "VERMELHO";
        case AZUL: return "AZUL";
        case VERDE: return "VERDE";
        default: return "PRETO";
    }
}
