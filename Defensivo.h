#include "Poder.h"
#ifndef DEFENSIVO_H
#define DEFENSIVO_H
class Defensivo:public Poder{
    private:
        double resistencia;
        double duracion;
    public:
        virtual string toString();
        Defensivo(double,double);
};
#endif