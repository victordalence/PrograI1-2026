// Materia: Programación I, Paralelo 4
// Autor: Victor Guillermo Dalence Deheza
// Carnet: 12420464
// Fecha creación: 10/03/2026

#include <iostream>
using namespace std;
//prototipo de la función
double cambio_doloficial(double monto, double oficial=6.86);
double cambio_dolparalelo(double monto, double paralelo=9.55);
int main()
{
    double oficial, paralelo, monto;
    cout<<"ingrese su monto en bolivianos: ";
    cin>>monto;
    cout<<endl<<"su monto en dolares en el tipo de cambio oficial es: "<<cambio_doloficial(monto, oficial);
    cout<<endl<<"su monto en dolares en el tipo de cambio paralelo es: "<<cambio_dolparalelo(monto, paralelo);
}
double cambio_doloficial(double monto, double oficial=6.86)
{
    double cambio_oficial;
    cambio_oficial=monto*oficial;
    return cambio_oficial;
}
double cambio_dolparalelo(double monto, double paralelo=9.55)
{
    double cambio_paralelo;
    cambio_paralelo=monto*paralelo;
    return cambio_paralelo;
}