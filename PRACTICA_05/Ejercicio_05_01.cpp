// Materia: Programación I, Paralelo 4
// Autor: Victor Guillermo Dalence Deheza
// Carnet: 12420464
// Fecha creación: 10/03/2026

#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

//prototipo de la función
double descuento_iva(double total_pagar);
int precios(int maximos , int minimos);

int main()
{
    system("cls");
    srand(time(NULL));
    int productos, minimos, maximos, precio;
    double suma_total, monto_final, IVA;
    cout<<"ingrese la cantidad de productos vendidos: ";
    cin>>productos;

    for (int i = 0; i < productos; i++)
    {
        int precio = precios(minimos, maximos);
        suma_total=precio;
    }
    IVA=suma_total*0.13;
    monto_final = descuento_iva(suma_total);
    cout<<endl<<"total de las ventas: "<<suma_total<<"Bs.";
    cout<<endl<<"IVA aplicado: "<<IVA<<"Bs.";
    cout<<endl<<"Total a pagar con IVA aplicado si el monto es mayor a 2500Bs: "<<monto_final<<"Bs.";
}
double descuento_iva(double total_pagar)
{
    double total;
    if (total_pagar > 2500)
    {
        total = total_pagar*0.95;
    }
    else{
        total = total_pagar;
    }
    return total;
}
int precios(int maximos , int minimos)
{
    int random;
    random = rand()%(maximos-minimos+1)+minimos;
    return random;
}