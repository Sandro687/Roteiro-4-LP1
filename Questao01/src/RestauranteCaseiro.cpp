#include "MesaDeRestaurante.h"
#include "Pedido.h"
#include <string>
#include "RestauranteCaseiro.h"

using namespace std;

RestauranteCaseiro::RestauranteCaseiro(){
	int e;
	for(e = 0; e < 10; e++){
		mesa[e] = new MesaDeRestaurante();
	}
}
void RestauranteCaseiro::adicionarPedido(int i2, int n, string d, int q, double p){
	mesa[i2]->adicionarPedido(n, d, q,p);
}
double RestauranteCaseiro::calculaTotalRestaurante(){
	double total = 0;
	int f;
	for(f = 0; f < 10; f++){
		total += mesa[f]->calculaTotal();
	}
	return total;
}
