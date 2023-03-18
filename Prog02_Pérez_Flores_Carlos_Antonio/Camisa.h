#ifndef CAMISA_H
#define CAMISA_H
#include <iostream>


using namespace std;

class Camisa
{
    private:
        int precio, codigo, descuento;
        string marca, talla, tipo, color;
    public:
        friend void establecercolorCamisa(Camisa&, string); //función amiga
        friend class Pantalon;
        Camisa();
        Camisa(int,int, int, string, string, string, string);
        Camisa(string, string, string);
        ~Camisa();
        void vender();
        void vender(int, int, string);
        void verificar();
        void verificar(int, int, string, string);
        int getcodigo();
        int getprecio();
        int getdescuento();
        string getmarca();
        void setmarca(string);
        string gettalla();
        void settalla(string);
        string gettipo();
        void settipo(string);
        string getcolor();
        void setcolor(string);


        int operator / (Camisa*); //sobrecarga de operador binario /
        int operator ++ (int); //sobrecarga de operador unitario ++
        friend ostream& operator << (ostream& salida, Camisa&); //sobrecarga de operador flujo <<
        friend istream& operator >> (istream& entrada, Camisa&); //sobrecarga de operador flujo >>
};

#endif // CAMISA_H
