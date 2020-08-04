#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(int argc, char const *argv[])
{
   int numero = 0;

   // inicialice el numero Random
   srand(time(NULL)); 

   for (int i = 0; i < 20; i++)
   {
     //genere un numero entre 1 y 10
   numero = rand() % 5 + 1;
   cout << " Numero al azar: " << numero;  
   }
   
   
    return 0;
}


