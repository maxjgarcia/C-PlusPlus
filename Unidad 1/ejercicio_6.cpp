#include <iostream>

/*
Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada una de las cuatro semanas del mes.
 El programa debe listar la recaudación promedio por semana y el porcentaje de recaudación por semana.
Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listará como recaudación promedio $2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.
*/

using namespace std;

int main(){

   float total_w_1, total_w_2, total_w_3, total_w_4;
   cout << "Ingresar recaudacion semana 1: ";
   cin >> total_w_1;
   cout << "Ingresar recaudacion semana 2: ";
   cin >> total_w_2;
   cout << "Ingresar recaudacion semana 3: ";
   cin >> total_w_3;
   cout << "Ingresar recaudacion semana 4: ";
   cin >> total_w_4;

   // total and average
    float total_amount = total_w_1 + total_w_2 + total_w_3 + total_w_4;
    float avg = total_amount / 4;

   cout << "El promedio de ventas es :" << avg << endl;

    // percentage per week
   cout << "Porcentajes por semana:" << endl;
    cout << "Semana 1: " << (total_w_1 / total_amount) * 100 << "%" << endl;
    cout << "Semana 2: " << (total_w_2 / total_amount) * 100 << "%" << endl;
    cout << "Semana 3: " << (total_w_3 / total_amount) * 100 << "%" << endl;
    cout << "Semana 4: " << (total_w_4 / total_amount) * 100 << "%" << endl;


return 0;
}
