#include "Ofensivo.h"
#include <sstream>
using std::stringstream;
string Ofensivo::toString(){
    stringstream mostrar;
    mostrar<<" Su poder es tipo: Ofensivo Su rango es: "<<rango<<" Su fuerza es: "<<fuerza;
    string imprimir=mostrar.str();
    return imprimir;
}
Ofensivo::Ofensivo(double ran,double fue){
    rango=ran;
    fuerza=fue;
}