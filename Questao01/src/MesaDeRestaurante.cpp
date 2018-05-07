#include <stdio.h>
#include <stdlib.h>
#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include <string>
#include <stdio.h>

using namespace std;

MesaDeRestaurante::MesaDeRestaurante(){
	pedido[indice] = new Pedido();
	indice++;
}
void MesaDeRestaurante::adicionarPedido(int n, string d, int q, double p){
	pedido[indice] = new Pedido(n,d,q,p);
	indice++;
}
void MesaDeRestaurante::zeraPedidos(){
	int c;
	for(c=0; c<10; c++){
		pedido[c] = new Pedido();
	}
}
double MesaDeRestaurante::calculaTotal(){
	int d;
	double total=0;
	for (d=0; d<10; d++){
		total = total + pedido[d]->getQuantidade()*pedido[d]->getPreco();
	}
	return total;
}
