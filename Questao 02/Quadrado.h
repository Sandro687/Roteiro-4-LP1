#ifndef QUADRADO_H_INCLUDED
#define QUADRADO_H_INCLUDED

#include "FiguraGeom.h"

class Quadrado : public FiguraGeometrica{
    public:
        Quadrado(double);//isosceles
        double sLado;
        double calculaArea();
};


#endif // QUADRADO_H_INCLUDED
