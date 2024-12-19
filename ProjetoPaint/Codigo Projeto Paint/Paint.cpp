#include "Paint.h"

// Construtor da classe Paint
Paint :: Paint(string label, int sequencial)
    : label(label), sequencial(sequencial) {
    this->label = label;
    this->sequencial = sequencial;
}

// Destrutor da classe Paint
Paint :: ~Paint() {
    for (auto obj : this->objetosGraficos) {
        delete obj;
    }
}

// Define o rotulo do Paint
void Paint :: setLabel(string label) {
    this->label = label;
}

// Obtem o rotulo do Paint
string Paint :: getLabel() {
    return this->label;
}

// Define o sequencial do Paint
void Paint :: setSequencial(int sequencial) {
    this->sequencial = sequencial;
}

// Obtem o sequencial do Paint
int Paint :: getSequencial() {
    return this->sequencial;
}

// Acrescenta um objeto grafico
void Paint :: acrescentar(ObjetoGrafico* objeto) {
    objeto->setSequencial(this->sequencial++);
    this->objetosGraficos.push_back(objeto);
}

// Apaga um objeto grafico pelo sequencial
void Paint :: apagar(int sequencial) {
    for (auto it = this->objetosGraficos.begin(); it != this->objetosGraficos.end(); ++it) {
        if ((*it)->getSequencial() == sequencial) {
            delete *it;
            this->objetosGraficos.erase(it);
            break;
        }
    }
}

// Apaga todos os objetos graficos
void Paint :: apagar() {
    for (auto obj : this->objetosGraficos) {
        delete obj;
    }
    this->objetosGraficos.clear();
}

// Move um objeto grafico
void Paint :: mover(int sequencial, int dx, int dy) {
    for (auto obj : this->objetosGraficos) {
        if (obj->getSequencial() == sequencial) {
            obj->mover(dx, dy);
            break;
        }
    }
}

// Redimensiona um objeto grafico
void Paint :: redimensionarObjetoGrafico(int sequencial, int x, int y) {
    for (auto obj : this->objetosGraficos) {
        if (obj->getSequencial() == sequencial) {
            obj->redimensionar(x, y);
            break;
        }
    }
}

// Desenha todos os objetos graficos
void Paint :: desenhar() {
    for (auto& obj : this->objetosGraficos) {
        cout << obj->toString() << endl;
    }
}

// Le os dados do Paint de um arquivo
void Paint :: ler(string label) {
}

// Grava os dados do Paint em um arquivo
void Paint :: gravar(string label) {
}
