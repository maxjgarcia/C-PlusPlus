#include <iostream>

/*
El Laboratorio V&V hace frascos de p�ldoras para aprender a programar. Cada frasco contiene 75 p�ldoras y cada p�ldora contiene 45 mg de Betamol,
2 grs de Micilina y 7 mg de �cido Sin�tico.
Nos solicitan un programa donde se ingrese la cantidad de frascos de un pedido y muestre la cantidad de miligramos de Betamol,
Micilina y de �cido Sin�tico que son necesarios para elaborarlos.

*/

using namespace std;

int main(){
    int flasks, pills, betamol, micilina, acido_sinitico;

    cout << "Ingresar la cantidad de frascos: "; cin >> flasks;
    cout << "" << endl;

    // cant de pildoras
    pills = flasks * 75;

    //cant de ingredientes
    betamol = pills * 45;
    micilina = pills * 2;
    acido_sinitico = pills * 7;

    cout << "Cantidad de Betamol, Micilina y �cido Sin�tico del pedido: " << endl;
    cout << "Betamol: " << betamol <<"mgs" << endl
            << "Micilina: " << micilina << "grs" << endl
            << "�cido Sin�tico: "<< acido_sinitico<< "mgs" << endl;


return 0;
}
