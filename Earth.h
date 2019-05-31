#include "Elemento.h"
#ifndef EARTH_H
#define EARTH_H
class Earth:public Elemento{
    private:
        double coles;
        double graduacion;
    public:
        virtual string toString();
        Earth(double,double);
};
#endif