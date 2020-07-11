#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Datos de entrada
    float a;
   float b;
   float suma;
   float resta;
   float multi;
   float divi;
     
     cout <<"Ingrse el valor de a: " << endl;
    cin >> a;

      cout <<"Ingrese el valor de b: " << endl;
     cin >> b;

//Proceso
   suma = a + b;
   resta= a-b;
   multi= a*b;
   divi=a/b; 
  
   
//Salida
cout << endl;
    cout << "La suma de a + b es: " << suma; 
    
    cout << endl;
    cout << "La resta de a - b es: " << resta; 
    
    cout << endl;
    cout << "La multiplicacion de a * b es: " << multi; 

cout << endl;
    cout << "La division de a / b es: " << divi; 
    
  
    return 0;
}
