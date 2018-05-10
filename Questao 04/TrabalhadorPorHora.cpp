#include "TrabalhadorPorHora.h"

using namespace std;

TrabalhadorPorHora::TrabalhadorPorHora(string nome):Trabalhador(nome){}

TrabalhadorPorHora::TrabalhadorPorHora():Trabalhador(){}

double TrabalhadorPorHora::CalcularPagamento(int horas){
    int valorPorHora=10;
    if(horas>40){
        return (valorPorHora*40) + ((horas-40)*(valorPorHora*1.5));
    }
    salario=(valorPorHora*40) + ((horas-40)*(valorPorHora*1.5));
    return horas*valorPorHora;


}

TrabalhadorPorHora::~TrabalhadorPorHora()
{
    //dtor
}
