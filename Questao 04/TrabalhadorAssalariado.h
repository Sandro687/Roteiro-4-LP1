#ifndef TRABALHADORASSALARIADO_H_INCLUDED
#define TRABALHADORASSALARIADO_H_INCLUDED

#include "Trabalhador.h"

class TrabalhadorAssalariado:public Trabalhador
{
  public:
        TrabalhadorAssalariado(std::string);
        TrabalhadorAssalariado();
        virtual ~TrabalhadorAssalariado();
        double CalcularPagamento(int);
    protected:
};

#endif // TRABALHADORASSALARIADO_H_INCLUDED
