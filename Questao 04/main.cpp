#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"

using namespace std;

int main()
{
    TrabalhadorPorHora *p1 = new TrabalhadorPorHora("Bruno");
    Trabalhador *p2= new Trabalhador("Joao");
    TrabalhadorAssalariado *p3=new TrabalhadorAssalariado("Matheus");



    p1->setSalario(50);
    p2->setSalario(50);
    p3->setSalario(50);
    cout<<p1->getSalario()<<endl;
    cout<<p2->getSalario()<<endl;
    cout<<p1->getNome()<<endl;
    cout<<p2->getNome()<<endl;
    cout<<p3->getNome()<<endl;
    cout<<p1->CalcularPagamento(41)<<endl;
    cout<<p2->CalcularPagamento(40)<<endl;
    cout<<p3->CalcularPagamento(39)<<endl;
    cout<<p3->getSalario()<<endl;

   delete p1;
   delete p2;
   delete p3;

    return 0;


}
