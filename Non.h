#include "Elemento.h"
#ifndef NON_H
#define NON_H
class Non:public Elemento{
    private:
        string trabajo;
        double fuerza;
        double velocidad;
    public:
        virtual string toString();
        Non(string,double,double);
};
#endif