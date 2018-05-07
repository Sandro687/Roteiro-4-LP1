#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"
#include <string.h>

using namespace std;

class MesaDeRestaurante
{
    public:
        MesaDeRestaurante();
        void adicionarPedido(int n, string d, int q, double p);
		void zeraPedidos();
        double calculaTotal();
    protected:

    private:
        Pedido *pedido[5];
        static int indice;
};

#endif // MESADERESTAURANTE_H
