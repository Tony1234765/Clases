#ifndef PANTALON_H
#define PANTALON_H
#include "Camisa.h"
#include <iostream>
using namespace std;

class Pantalon
{
    private:
        Camisa *combo;
        int precio, cantidad;
        string material, color, talla;
    public:
        friend void establecermaterialPantalon(Pantalon&, string);
        friend class Maestro;
        void metodofriend(Camisa &camisaobj);
        Pantalon();
        Pantalon(int, int, string, string, string);
        Pantalon(int, string, string);
        ~Pantalon();
        void setprecio(int);
        int getprecio();
        void setcantidad(int);
        int getcantidad();
        void setmaterial(string);
        string getmaterial();
        void setcolor(string);
        string getcolor();
        void settalla(string);
        string gettalla();
        void bodega();
        void bodega(string);

        int operator - (Pantalon*);

};

#endif // PANTALON_H
