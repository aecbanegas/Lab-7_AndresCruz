#include "Poder.h"
#ifndef INVOCACION_H
#define INVOCACION_H
class Invocacion:public Poder{
    private:
        string nombre;
        string especie;
        string habilidad;
        bool tipo;
    public:
        virtual string toString();
        Invocacion(string,string,string,bool);
};
#endif