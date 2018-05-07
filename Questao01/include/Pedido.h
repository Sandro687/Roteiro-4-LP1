#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>

class Pedido
{
    private:
    int numero;
    std::string descricao;
    int quantidade;
    double preco;

    public:
        Pedido();
        Pedido(int n, std::string d, int q, double p);
        int getNumero();
		std::string getDescricao();
		int getQuantidade();
        double getPreco();
};

#endif // PEDIDO_H
