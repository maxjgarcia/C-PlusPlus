#include <iostream>

/*
Una concesionaria de autos paga a los vendedores un sueldo fijo de $5000 más $700 de premio por cada auto vendido.
 Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos por un vendedor y luego informar
por pantalla el sueldo total a pagar.
Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $7800.

*/

using namespace std;

int main(){
    int fixed_salarie, bonus, amount_sold, salarie;
    fixed_salarie = 5000;
    bonus = 700;
    cout << "Ingresar la cantidad de autos vendidos: ";
    cin >> amount_sold;
    salarie = fixed_salarie + amount_sold * bonus;
    cout << "El salario del vendedor es: " << salarie;


return 0;
}
