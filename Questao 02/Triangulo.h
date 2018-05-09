#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED

#include "FiguraGeom.h"

class Triangulo : public FiguraGeometrica{
    public:
        Triangulo(double);
        double sLado;
        double calculaArea();
};


#endif // TRIANGULO_H_INCLUDED
