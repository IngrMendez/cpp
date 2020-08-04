#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
   system ("cls");
   
   int opcionProducto = 0;

    switch (opcion)
    {
         case 1:
     {
        cout << "*****************" << endl;
		cout << "Bebidas Calientes" << endl;
        cout << "*****************" << endl;
        cout << "1 - Capuccino" << endl;
        cout << "2 - Expresso" << endl;
        cout << "3 - Latte" << endl;
        cout << endl;

         cout << "Ingrese una opcion:";
		 cin >> opcionProducto;

    switch(opcionProducto)
    {
        case 1:
           agregarProducto("1 Capuccino - L 40.00", 1, 40);
           break;
   
        case 2:
           agregarProducto("1 Expresso - L 30.00", 1, 30);
           break;
         
        case 3:
           agregarProducto("1 Latte - L 45.00", 1, 45);
           break;

     default:
        {
		 cout << "opcion no valida";
         return;
         break;
		}
    }
    
    cout << endl;
    cout << "Producto agregado" << endl << endl;
    system("pause");

    break;
     }

        case 2:
    {
        cout << "*************" << endl;
		cout << "Bebidas Frias" << endl;
        cout << "*************" << endl;
        cout << "1 - Granita de Cafe" << endl;
        cout << "2 - Granita de Naranja" << endl;
        cout << "3 1- Granita de Mora" << endl;
        cout << endl;
         
         cout << "Ingrese una opcion:";
		 cin >> opcionProducto;
         
         switch(opcionProducto)
    {
        case 1:
           agregarProducto("1 Granita de Cafe - L 35.00", 1, 35);
           break;
   
        case 2:
           agregarProducto("1 Granita de Naranja - L 35.00", 1, 35);
           break;
         
        case 3:
           agregarProducto("1 Granita de Mora - L 35.00", 1, 35);
           break;

     default:
        {
		 cout << "opcion no valida";
         return;
         break;
		}
    }
    
    cout << endl;
    cout << "Producto agregado" << endl << endl;
    system("pause");

    break;
        
    }
    
    case 3:
    {
        cout << "***********" << endl;
		cout << "Reposteria" << endl;
        cout << "***********" << endl;
        cout << "1 - Semita" << endl;
        cout << "2 - Pastelito de Piña" << endl;
        cout << "3 - Tarta de Manzana " << endl;
        cout << endl;
         
         cout << "Ingrese una opcion:";
		 cin >> opcionProducto;
         
         switch(opcionProducto)
    {
        case 1:
           agregarProducto("1 Semita - L 25.00", 1, 25);
           break;
   
        case 2:
           agregarProducto("1 Pastelito de Piña - L 20.00", 1, 20);
           break;
         
        case 3:
           agregarProducto("1 Tarta de Manzana - L 40.00", 1, 40);
           break;

     default:
        {
		 cout << "opcion no valida";
         return;
         break;
		}
    }
    
    cout << endl;
    cout << "Producto agregado" << endl << endl;
    system("pause");

    break;
        
    }
    default:
    break;
    }
}
   
       
   
   