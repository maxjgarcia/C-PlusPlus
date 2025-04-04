#include <iostream>

/*
La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura mínima en una zona y tiempo determinado.
Dada la temperatura máxima y la temperatura mínima de San Fernando de ayer, calcular y mostrar la amplitud térmica.

NOTA: El usuario ingresará como temperatura máxima un valor mayor o igual al de la temperatura mínima.

*/

using namespace std;

int main(){
   float max_temp, min_temp, amp_termica;

   cout << "Ingresar temperatura minima: "; cin >> min_temp;
    cout << "Ingresar temperatura maxima: "; cin >> max_temp;

   if (max_temp < min_temp){
    while(max_temp < min_temp) {
    cout << "La temperatura maxima debe ser mayor o igual a la minima."<< endl << "Ingresar temperatura maxima: "; cin >> max_temp;
   }
   }

   amp_termica = max_temp - min_temp;

   cout << "La amplitud terminca es: "<< amp_termica << " grados." << endl;

return 0;
}
