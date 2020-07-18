#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;    
    int descuento = 0;
    double calculodescuento =0;
    double calculoimpuesto =0;
    char estaexenta;

    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;
    
     cout << "Ingrese el descuento (0,10,15,20): ";
     cin >> descuento;

     cout << "Factura exenta S/N";
    cin >> estaexenta;

cout << endl;

        calculodescuento=(subtotal * descuento)/100;
    calculoimpuesto=(subtotal - calculodescuento)*0.15;
    
  if  (estaexenta=='s' || estaexenta=='S'){
  	
  	 total=subtotal - calculodescuento;
     cout << "Total a pagar es: " << total;
  }
  
  cout << endl;
   if  (estaexenta == 'n' || estaexenta == 'N'){
  	
  	 total=subtotal - calculodescuento + calculoimpuesto;
     cout << "Total a pagar es: " << total;
  }
cout << endl;
	return 0;	
}
