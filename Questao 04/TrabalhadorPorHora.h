#ifndef TRABALHADORPORHORA_H_INCLUDED
#define TRABALHADORPORHORA_H_INCLUDED

#include "Trabalhador.h"

class TrabalhadorPorHora:public Trabalhador
{
    public:
        TrabalhadorPorHora(std::string);
        TrabalhadorPorHora();
        virtual ~TrabalhadorPorHora();
        double CalcularPagamento(int);
    protected:

};

#endif // TRABALHADORPORHORA_H_INCLUDED
