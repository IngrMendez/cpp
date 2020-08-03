#include <iostream>

using namespace std;

string nombrecompleto(string nombre, string apellido)
{
return nombre + "  " + apellido;
}

int main(int argc, char const *argv[])
{
    string primernombre=" ";
     string primerapellido=" ";

  cout << "Ingrese su primer nombre";
  cin >> primernombre;
cout << "Ingrese su primer pellido";
  cin >> primerapellido;

  cout << endl;

  cout << "Nombre Completo: " << nombrecompleto(primerapellido,primerapellido);
    return 0;
}
