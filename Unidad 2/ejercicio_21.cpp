#include <iostream>

using namespace std;

/*
Una marroquinería dispone de 45 carteras blancas, 50 carteras negras, 40 marrones y 49 grises. Se pide hacer un programa donde se ingresen tres ventas. Cada venta está compuesta por:



Cantidad de carteras
Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)

Calcular e informar:
Cantidad total de carteras vendidas en total.
Cuántas carteras quedaron de cada tipo.
Los colores de carteras que no se vendieron.
NOTA: Ninguna venta superará las 10 carteras. */

int main()
{
    int ammount, white=45, black=50, brown=40, gray=49, total=0, color;
    bool s_white = false, s_black = false, s_brown = false, s_gray = false;
   
    
    for(int i=0; i<3; i++){
        
        cout<<"Ingresar cantidad de carteras :"; cin>>ammount;
         if (ammount < 1 || ammount > 10) {
        cout << "La cantidad debe ser entre 1 y 10." << endl; i--; continue;
        }
        
        cout<<"Ingresar color (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris) :"; cin>>color;

        switch(color){
            case 1 : white -= ammount; s_white = true ; break;
            case 2 : black -= ammount; s_black = true ; break;
            case 3 : brown -= ammount; s_brown = true ; break;
            case 4 : gray -= ammount; s_gray = true ; break;
            default: cout << "Seleccion invalida" << endl;
        return 0;
        
        }
        total += ammount;
   
    }
    
    cout<<"Cantidad total de carteras vendidas en total: "<< total<<endl;
    
     cout<<"Cuántas carteras quedaron de cada tipo"<<endl;
    cout<<"blancas :"<< white <<endl;
    cout<<"negras :"<< black <<endl;
    cout<<"marrones :"<<brown <<endl;
    cout<<"grises :"<<gray <<endl;
    
    cout<<"Los colores de carteras que no se vendieron: "<<endl;
    if (!s_white) cout << "Blancas" << endl;
    if (!s_black) cout << "Negras" << endl;
    if (!s_brown) cout << "Marrones" << endl;
    if (!s_gray) cout << "Grises" << endl;
    
    return 0;
    
}




