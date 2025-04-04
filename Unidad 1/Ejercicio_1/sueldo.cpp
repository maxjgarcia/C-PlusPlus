#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario y el valor que se le paga
por hora trabajada y listar por pantalla el sueldo que le corresponda.
*/

int main(){
int hoursWorked, hourValue, salarie;

cout << "Ingresar cantidad de horas trabajadas: ";
cin >> hoursWorked;
cout << "Ingresar el valor de la hora trabajada: ";
cin >> hourValue;
salarie = hoursWorked * hourValue;
cout << "El salario del operario es: $" << salarie;

return 0;
}
