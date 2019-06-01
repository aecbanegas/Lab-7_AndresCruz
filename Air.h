#include "Persona.h"
#include "Poder.h"
#ifndef AIR_H
#define AIR_H
class Air:public Persona{
    private:
        double pelo;
        string color;
        Poder* poder;
    public:
        virtual string toString();
        Air(string,string,int,bool,double,string,Poder*);
        virtual string Tipo();
};
#endif