#include "Trabalhador.h"

using namespace std;

Trabalhador::Trabalhador(string nome)
{
    this->nome=nome;
}
double Trabalhador::getSalario(){
    return salario;

}
Trabalhador::Trabalhador(){
    salario = 0;

}
void Trabalhador::setSalario(double salario){
    this->salario=salario;

}

double Trabalhador::CalcularPagamento(int horas){
   return salario;
}

string Trabalhador::getNome(){
    return nome;

}
Trabalhador::~Trabalhador()
{
    //dtor
}
