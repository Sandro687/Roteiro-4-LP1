#ifndef RETANGULO_H_INCLUDED
#define RETANGULO_H_INCLUDED

#include "FiguraGeom.h"

class Retangulo : public FiguraGeometrica{
    public:
        Retangulo(double, double);//isosceles
        double base;
        double altura;
};

#endif // RETANGULO_H_INCLUDED
