#include <iostream>
#include <stdio.h>
#include <string>
#include "MesaDeRestaurante.h"
#include "Pedido.h"
#include "RestauranteCaseiro.h"

using namespace std;

int MesaDeRestaurante::indice = 0;

int main(){
	RestauranteCaseiro *Dnapoles;
	MesaDeRestaurante *mesa2 = new MesaDeRestaurante();
	mesa2->adicionarPedido(4,"Pizza", 3, 48);

	return 0;
}
