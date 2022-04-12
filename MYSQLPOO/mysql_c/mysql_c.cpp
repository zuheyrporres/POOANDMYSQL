#include "Cliente.h"
#include <iostream>
using namespace  std;



int main(){

	string nit, nombres, apellidos, direccion;
	int telefono = 0;
	
	cout << "Ingrese Nit:";
	getline(cin, nit);
	cout << "Ingrese Nombres:";
	getline(cin, nombres);
	cout << "Ingrese Apellidos:";
	getline(cin, apellidos);
	cout << "Ingrese Direccion:";
	getline(cin, direccion);
	cout << "Ingrese Telefono:";
	cin >> telefono;
	cin.ignore();
	cout << "Fecha Nacimiento:";

	Cliente c = Cliente(nombres, apellidos, direccion, telefono, nit);

	c.crear();
			  

	c.leer();
	fflush(stdin);
	cout << "\n\tEditar Cliente: " << endl;
	cin.ignore();
	cout << "Ingrese Nit:";
	getline(cin, nit);
	cout << "Ingrese Nombres:";
	getline(cin, nombres);
	cout << "Ingrese Apellidos:";
	getline(cin, apellidos);
	cout << "Ingrese Direccion:";
	getline(cin, direccion);
	cout << "Ingrese Telefono:";
	cin >> telefono;
	cin.ignore();
	Cliente c1 = Cliente(nombres, apellidos, direccion, telefono, nit);
	c1.editar();
	c1.leer();

	c1.eliminar();
	c1.leer();

	system("pause");
	return 0;

}
