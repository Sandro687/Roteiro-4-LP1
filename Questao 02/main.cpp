#include <string>
#include <iostream>
#include "FiguraGeom.h"
#include "Triangulo.h"
#include "Quadrado.h"
#include "Retangulo.h"

int main(void){
    Triangulo *t1 = new Triangulo(6);
    Quadrado *q1 = new Quadrado(7);
    Retangulo *r1 = new Retangulo(8.0,3);

    std::cout << "Nome: " << t1->nome << " \nArea: " << t1->calculaArea() << " \nTamanho do lado: " << t1->sLado << std::endl;
    std::cout << "Nome: " << q1->nome << " \nArea: " << q1->calculaArea() << " \nTamanho do lado: " << q1->sLado << std::endl;
    std::cout << "Nome: " << r1->nome << " \nArea: " << r1->calculaArea(r1->base, r1->altura) << " \nTamanho dos lados: " << r1->base << "," << r1->altura << std::endl;

    return 0;
}
