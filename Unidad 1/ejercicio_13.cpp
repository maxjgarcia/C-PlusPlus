#include <iostream>

/*
Hacer un programa para un cajero automático para ingresar un importe a retirar y convertir el mismo en la cantidad de billetes de $1.000, $500, $200 y $100 a entregar.

Ejemplo A: Si el importe a retirar es $2500 se mostrará por pantalla que se deberán entregar 2 billetes de $1.000, 1 billete de $500,  0 billetes de $200 y 0
billetes de $100.

Ejemplo B: Si el importe a retirar es $3400 se mostrará por pantalla que se deberán entregar 3 billetes de $1.000, 2 billetes de $200, 0 billetes de $500 y 0
billetes de $100.

Ejemplo C: Si el importe a retirar es $300 se mostrará por pantalla que se deberán entregar 1 billete de $200, 1 billete de $100, 0 billetes de $1.000 y 0
billetes de $500.

Recordatorio. Considerar en todos los casos que el importe a retirar es en todos los casos múltiplo de $100 ya que el cajero no cuenta con billetes de $50, $20 o $10.

*/

using namespace std;

int main(){
    int initial_ammount;
    int bill_1000, bill_500, bill_200, bill_100;
    int residue1, residue2, residue3;

    cout << "Ingresar la cantidad de dinero: "; cin >> initial_ammount;

    bill_1000 = initial_ammount / 1000;
    residue1 = initial_ammount - (1000 * bill_1000);

    bill_500 = residue1 / 500;
    residue2 = residue1 - (500 * bill_500);

    bill_200 = residue2 / 200;
    residue3 = residue2 - (200 * bill_200);

    bill_100 = residue3 / 100;

    if (bill_1000 > 0 || bill_500 > 0 || bill_200 > 0 || bill_100 > 0) {
        cout << "Cantidad total de billetes:" << endl;
        if (bill_1000 > 0) {
            cout << "Billetes de $1000: " << bill_1000 << endl;
        }
        if (bill_500 > 0) {
            cout << "Billetes de $500: " << bill_500 << endl;
        }
        if (bill_200 > 0) {
            cout << "Billetes de $200: " << bill_200 << endl;
        }
        if (bill_100 > 0) {
            cout << "Billetes de $100: " << bill_100 << endl;
        }
    } else {
        cout << "No se puede realizar la operacion, cantidad mininima a retirar $100.";
    }



return 0;
}
