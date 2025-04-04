#include <iostream>

/*
Hacer un programa para ingresar el importe de una compra y el descuento a aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado
y el importe total a cobrar.

Ejemplo: se ingresa importe 4500, descuento 40; se deberá mostrar

Importe: 4500, Descuento: 1800, total: 2700.

*/

using namespace std;

int main(){
   float discount, sale;

   cout << "Total de compra: ";
   cin >> sale;
   cout << "Descuento %: ";
   cin >> discount;

   //total a pagar
   float total_dis  = sale * discount / 100;
   float total = sale - total_dis;

   cout << endl << "Valor de compra: $" << sale <<endl;
   cout << "Descuento: $" << total_dis << endl;
   cout << "-------------------------" << endl;
   cout << "Total a pagar : $" << total << endl;

return 0;
}
