#include <iostream>

/*
La amplitud t�rmica es la diferencia entre la temperatura m�xima y la temperatura m�nima en una zona y tiempo determinado.
Dada la temperatura m�xima y la temperatura m�nima de San Fernando de ayer, calcular y mostrar la amplitud t�rmica.

NOTA: El usuario ingresar� como temperatura m�xima un valor mayor o igual al de la temperatura m�nima.

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
