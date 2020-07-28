#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int opcion = 0;

   while (true)
   {
      system ("cls");
      cout << "****"  << endl;
      cout << "Menu"  << endl;  
      cout << "****"  << endl;

      cout << endl;

      cout << "1 - Bebidas Calientes"  << endl;
      cout << "2 - Bebidas Heladas"  << endl;
    cout << "3 - Reposteria"  << endl;
      cout << "0 - Salir"  << endl;

      cout << endl;
        cout << "Ingrese una opcion entre 0 y 3 "  << endl;
         cin >> opcion;

         if (opcion ==0)
         {
           break;
         }
         

if (opcion ==1)
{
    system ("cls");
      cout << "********************"  << endl;
      cout << "Bebidas Calientes"  << endl;
      cout << "********************"  << endl;
      cout << endl;
      system ("pause");
}

if (opcion ==2)
{
    system ("cls");
      cout << "********************"  << endl;
      cout << "Bebidas Heladas"  << endl;
      cout << "********************"  << endl;
      cout << endl;
      system ("pause");
}
if (opcion ==3)
{
    system ("cls");
      cout << "********************"  << endl;
      cout << "Reposteria"  << endl;
      cout << "********************"  << endl;
      cout << endl;
      system ("pause");
}

if (opcion ==0 || opcion < 3)
{
    system ("cls");
      cout << "Ingrese una opcion valida entre 0 y 3:"  << endl;
      cout << endl;
      system ("pause");
}

   }
   
    return 0;
}
