#include "Elemento.h"
#ifndef WATER_H
#define WATER_H
class Water:public Elemento{
    private:
        bool tribu;
        string arma;
    public:
        Water(bool,string);
        virtual string toString();
};
#endif