#ifndef MAESTRO_H
#define MAESTRO_H
#include "Pantalon.h"
#include <iostream>
using namespace std;

class Maestro
{
    private:
        string nombre, materia, seccion, turno;
        int codigo;
    public:
        void metodofriend(Pantalon &pantalonobj);
        friend void establecermateriaMaestro(Maestro&, string);
        friend class Alumno;
        Maestro(); //constructor
        Maestro(string, string, string, string, int); //constructor 2
        Maestro (string, string, int); //constructor 3
        ~Maestro(); //destructor
        void ensenhar();
        void ensenhar(string);
        void setnombre(string); //los sets nos sirven para establecer o dar valores a nuestros atributos
        string getnombre(); //los gets nos sirve para mostrar, para dar la informacion que tiene almacenada la variable
        void setmateria(string);
        string getmateria();
        void setseccion(string);
        string getseccion();
        void setturno(string);
        string getturno();
        void setcodigo(int);
        int getcodigo();

        int operator+=(int);
};

#endif // MAESTRO_H
