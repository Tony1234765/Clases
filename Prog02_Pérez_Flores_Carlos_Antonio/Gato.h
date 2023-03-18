#ifndef GATO_H
#define GATO_H
#include "Perro.h"
#include <iostream>
using namespace std;

class Gato
{
    private:
        string nombre, raza, tamanho, pelaje;
        int meses;
    public:
        Gato();
        Gato(string, string, string, string, int);
        Gato(string, string, string);
        ~Gato();
        void metodofriendPerro(Perro &perroobj);
        void setnombre(string);
        string getnombre();
        void setraza(string);
        string getraza();
        void settamanho(string);
        string gettamanho();
        void setpelaje(string);
        string getpelaje();
        void setmeses (int);
        int getmeses();
};

#endif // GATO_H
