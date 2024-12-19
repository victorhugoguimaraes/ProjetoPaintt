// Autor: Victor Hugo Guimaraes Nascimento, 
//Matricula: 232031085
#include <iostream>
#include "Paint.h"
#include "Linha.h"
#include "Quadrado.h"
#include "Retangulo.h"
#include "Circulo.h"
#include "Oval.h"

using namespace std;

int main() {
    Paint paint("Paint", 1);

    cout << "Adicionando objetos graficos..." << endl;
    paint.acrescentar(new Linha(0, 0, 10, 10, PRETO, paint.getSequencial()));
    paint.acrescentar(new Quadrado(5, 5, 10, VERMELHO, paint.getSequencial()));
    paint.acrescentar(new Retangulo(10, 10, 20, 15, AZUL, paint.getSequencial()));
    paint.acrescentar(new Circulo(15, 15, 5, VERDE, paint.getSequencial()));
    paint.acrescentar(new Oval(20, 20, 30, 25, BRANCO, paint.getSequencial()));

    cout << "Desenhando todos os objetos graficos:" << endl;
    paint.desenhar();

    cout << "\nMovendo o primeiro objeto grafico (Linha) em (5, 5)..." << endl;
    paint.mover(1, 5, 5);
    paint.desenhar();

    cout << "\nRedimensionando o segundo objeto grafico (Quadrado) para tamanho 15..." << endl;
    paint.redimensionarObjetoGrafico(2, 15, 15);
    paint.desenhar();

    cout << "\nApagando o terceiro objeto grafico (Retangulo)..." << endl;
    paint.apagar(3);
    paint.desenhar();

    cout << "\nApagando todos os objetos graficos..." << endl;
    paint.apagar();
    paint.desenhar();

    return 0;
}
