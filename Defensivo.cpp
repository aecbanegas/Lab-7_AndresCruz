#include "Defensivo.h"
#include <sstream>
using std::stringstream;
string Defensivo::toString(){
    stringstream mostrar;
    mostrar<<"Su poder es tipo: Defensivo Su resistencia es de: "<<resistencia<<" Su duracion es: "<<duracion;
    string imprimir=mostrar.str();
    return imprimir;
}
Defensivo::Defensivo(double res, double dur){
    resistencia=res;
    duracion=dur;
}