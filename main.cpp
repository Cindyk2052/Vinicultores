#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
  ofstream archivo;
  
  string nombre;
  int n;

  cout << "Ingrese el nombre del archivo: ";
  getline(cin, nombre);
  archivo.open(nombre.c_str(), ios::app);	

  setlocale(LC_ALL, "spanish");
	double precioKilo, totalUvas, venta, ganancia;
	int op;
	cout << "Ingrese el precio inicial de kilo de uvas: ";
  cin >> precioKilo;
  archivo << "Precio inicial de kilo de uvas: " << precioKilo << endl;

	cout << "Ingrese el total de kilos de uvas producidas: ";
  cin >> totalUvas;
  archivo << "Kilos de uvas producidas: " << totalUvas << endl;
	
	venta = precioKilo * totalUvas;
	cout << "Venta: " << venta << endl;
  archivo << "Venta: " << venta << endl;
	cout << "\t Clasificación" << endl;
	cout << "1. Tipo A-Tamaño 1" << endl;
	cout << "2. Tipo A-Tamaño 2" << endl;
	cout << "3. Tipo B-Tamaño 1" << endl;
	cout << "4. Tipo B-Tamaño 2" << endl;
	cout << "Ingrese su opción: ";
	cin >> op;

	switch (op){
		case 1:{
			ganancia = venta + 0.20;
			cout << "Ganancia: " << ganancia << "$" << endl;
      archivo << "Ganancia (Tipo A-Tamaño 1): " << ganancia << "$" << endl;
			break;
		}
		case 2:{
			ganancia = venta + 0.30;
			cout << "Ganancia: " << ganancia << "$" << endl;
      archivo << "Ganancia (Tipo A-Tamaño 2): " << ganancia << "$" << endl;
			break;
		}
		case 3:{
			ganancia = venta - 0.30;
			cout << "Ganancia: " << ganancia << "$" << endl;
      archivo << "Ganancia (Tipo B-Tamaño 1): " << ganancia << "$" << endl;
			break;
		}
		case 4:{
			ganancia = venta - 0.50;
			cout << "Ganancia: " << ganancia << "$" << endl;
      archivo << "Ganancia (Tipo B-Tamaño 2): " << ganancia << "$" << endl;
			break;
		}
		default:{
			cout << "Opción no valida";
      archivo << "Opción no valida";
			break;
		}
  }  

  archivo.close();
}


