#include "Elemento.h"
#ifndef FIRE_H
#define FIRE_H
class Fire:public Elemento{
    private:
        double cicatrices;
        double victorias;
    public:
        Air(double,double);
        virtual string toString();
}; 
#endif