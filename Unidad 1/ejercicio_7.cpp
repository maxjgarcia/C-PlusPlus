#include <iostream>

/*
Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de descuento aplicada a la misma y luego informar
por pantalla el importe a pagar.
Ejemplo A. Si el importe de la venta es $1200 y el descuento es el 15% entonces el total a pagar ser� de $1020.
Ejemplo B. Si el importe de la venta es $800 y el descuento es el 0% entonces el total a pagar ser� de $800.

*/

using namespace std;

int main(){
   float discount, sale;

   cout << "Total de venta: ";
   cin >> sale;
   cout << "Descuento %: ";
   cin >> discount;

   //total a pagar
   float total_dis  = sale * discount / 100;
   float total = sale - total_dis;
   cout << "Total a pagar : $" << total;


return 0;
}
