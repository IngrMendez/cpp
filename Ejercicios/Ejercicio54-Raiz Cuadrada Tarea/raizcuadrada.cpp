#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv)
{
	double a = 0;
	double Resultado = 0;
	
	cout << "Ingrese un valor para a: ";
	cin >> a;
	
	Resultado = sqrt(a);
	
	cout << endl;
	
	cout << "La raiz cuadrada es: " << Resultado << endl;
	
	return 0;
}

    