#ifndef ALUMNO_H
#define ALUMNO_H
#include "Maestro.h";
#include <iostream>
using namespace std;

class Alumno
{
    private:
        string nombre, carrera, centro;
        int edad, codigo;
    public:
        void metodofriendMaestro(Maestro &maestro);
        friend void establecercentroAlumno(Alumno&, string);
        friend class Perro;
        Alumno();
        Alumno(string, string, string, int, int);
        Alumno(string, string, int);
        ~Alumno();
        void estudiar();
        void estudiar(string);
        void setnombre(string);
        string getnombre();
        void setcarrera(string);
        string getcarrera();
        void setcentro(string);
        string getcentro();
        void setedad(int);
        int getedad();
        void setcodigo(int);
        int getcodigo();
        int operator > (Alumno*);
};

#endif // ALUMNO_H
