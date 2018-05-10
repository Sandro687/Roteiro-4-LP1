#include "TrabalhadorAssalariado.h"

using namespace std;

TrabalhadorAssalariado::TrabalhadorAssalariado(string nome):Trabalhador(nome){}

TrabalhadorAssalariado::TrabalhadorAssalariado():Trabalhador(){}

double TrabalhadorAssalariado::CalcularPagamento(int horas){
    int valorPorHora=10;
    if(horas>=40){
        salario=(valorPorHora*40) + ((horas-40)*(valorPorHora*1.5));
        return (valorPorHora*40) + ((horas-40)*(valorPorHora*1.5));
    }
    else if(horas<40){
        salario=0;
        return 0;
    }

}

TrabalhadorAssalariado::~TrabalhadorAssalariado()
{
    //dtor
}
