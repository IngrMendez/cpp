#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char** argv)
{
	int sumar = 0;
	int dado1 = 0;
	int dado2 = 0;

	srand (time(NULL)); 
	
	dado1 = rand() % 6 + 1;
	dado2 = rand() % 6 + 1;
	
	cout << "Dado 1:" << dado1;
	
	cout << endl;
	
	cout << "Dado 2:" << dado2;

    cout << endl;
	
	
	sumar = dado1 + dado2;
	
	return 0;
}