#ifndef PERRO_H
#define PERRO_H
#include "Alumno.h"
#include <iostream>
using namespace std;

class Perro
{
    private:
        string nombre, raza, tamanho, pelaje;
        int meses;
    public:
        friend class Alumno;
        void metodofriendAlumno(Alumno &alumnoobj);
        friend void establecerrazaPerro(Perro&, string);
        friend class Gato;
        Perro();
        Perro(string,string,string,string,int);
        Perro(string, string, int);
        ~Perro();
        void jugar();
        void jugar(string);
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
        int operator * (Perro&);

};

#endif // PERRO_H
