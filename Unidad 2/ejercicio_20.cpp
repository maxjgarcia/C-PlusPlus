#include <iostream>

using namespace std;

/*
Hacer un programa en el que se ingrese la edad y altura de 5 personas. Luego, calcular e informar:
La cantidad de personas mayores a 30 años que midan más de 1.8 metros.
El promedio de altura de las personas mayores a 30 años.
La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
La cantidad de personas cuya edad sea de 20, 30 o 40 años. */

int main()
{
    int age, cont_30=0, cont_tall=0, cont_med_height=0, cont_age=0;
    float height, cont_30_height=0, avg ;
    
    for(int i=0; i<5; i++){
        cout<<"Ingresar Edad: "; cin>>age;
        cout<<"Ingresar Altura: "; cin>>height;
        
        if(age >= 30){
            cont_30 ++;
            cont_30_height += height;
            
            if (height > 1.8){
                cont_tall ++;
            }
            
        if (height >= 1.7 & height <= 1.8){
            cont_med_height ++;
        }
        
        if( age==20 || age==30 || age==40){
            cont_age ++;
        }
        }
    }
        
        
    avg = cont_30_height / (float)cont_30;
    
    cout<<"Cantidad de mayores a 30 y mas de 1.8m: "<<cont_tall<<endl; 
    cout<<"Promedio altura de mayores a 30: "<<avg<<endl;
    cout<<"Cantidad de personas con altura entre 1.7 y 1.8: "<<cont_med_height<<endl;
    cout<<"Cantidad de personas cuya edad sea de 20, 30 o 40 años.: "<<cont_age<<endl;
    

    return 0;
    
}























