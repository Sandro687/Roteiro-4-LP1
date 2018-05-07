#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "MesaDeRestaurante.h"
#include "Pedido.h"
#include <string>

using namespace std;

class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();
        void adicionarPedido(int i2, int n, string d, int q, double p);
        double calculaTotalRestaurante();

    protected:

    private:
    MesaDeRestaurante *mesa[5];
};

#endif // RESTAURANTECASEIRO_H
