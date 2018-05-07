#include "Pedido.h"
#include <stdio.h>

using namespace std;

Pedido::Pedido()
{
    numero = 0;
    descricao = "0";
    quantidade = 0;
    preco = 0;
    //ctor
}

Pedido::Pedido(int n, std::string d, int q, double p){
	numero = n;
	descricao = d;
	quantidade = q;
	preco = p;
}
int Pedido::getNumero(){
	return numero;
}
std::string Pedido::getDescricao(){
	return descricao;
}
int Pedido::getQuantidade(){
	return quantidade;
}
double Pedido::getPreco(){
	return preco;
}
