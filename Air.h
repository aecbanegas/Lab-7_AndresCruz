#include "Elemento.h"
#ifndef AIR_H
#define AIR_H
class Air:public Elemento(){
    private:
        double pelo;
        string color;
    public:
        virtual string toString();
        Air(double,string);
};
#endif