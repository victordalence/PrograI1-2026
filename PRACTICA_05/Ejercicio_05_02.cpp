// Materia: Programación I, Paralelo 4
// Autor: Victor Guillermo Dalence Deheza
// Carnet: 12420464
// Fecha creación: 10/03/2026

#include <iostream>
using namespace std;
//prototipo de la función
double comisiones(double N_ventas);
double sueldo(double comision, double sueldo_basico);

int main()
{
    system("cls");
    int vendedoras;
    double S_basico, venta_total, comision_extra, sueldo_total;
    cout<<"ingrese la cantidad de vendedoras a contratar: ";
    cin>>vendedoras;

    for (int i = 1; i <= vendedoras; i++)
    {
        cout<<endl<<"vendedora N: "<<i;
        cout<<endl<<"ingrese el sueldo basico: ";
        cin>>S_basico;
        cout<<endl<<"ingrese lo vendido por mes: ";
        cin>>venta_total;
        comision_extra = comisiones(venta_total);
        sueldo_total = sueldo(S_basico, comision_extra);
        cout<<endl<<" comision extra del 10%: "<<comision_extra<<"Bs.";
        cout<<endl<<"sueldo a dar o pagar: "<<sueldo_total<<"Bs.";
    }
}
double comisiones(double N_ventas)
{
    double comision;
    comision = N_ventas*0.10;
    return comision;
}
double sueldo(double comision, double sueldo_basico)
{
    double sueldo;
    sueldo = comision+sueldo_basico;
    return sueldo;
}