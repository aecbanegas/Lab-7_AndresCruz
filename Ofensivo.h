#include "Poder.h"
#ifndef OFENSIVO_H
#define OFENSIVO_H
class Ofensivo:public Poder{
    private:
        double rango;
        double fuerza;
    public:
        virtual string toString();
        Ofensivo(double,double);
};
#endif
