//============================================================================
// Name        : ListaEnlazada.cpp
// Author      : Raydelto Hernandez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Lista.h"
using namespace std;

string formatearTiempo(int duracion){
	int minutos = duracion / 60;
	int segundos = duracion % 60;
	cout << " " << minutos << " minutos y " << segundos << " segundos" << endl;
}

int main() {
	int opcion;
	Elemento* cancion1 = new Elemento("Te Para Tres","SodaStereo",129);
	Elemento* cancion2 = new Elemento("Ciudad de la furia","SodaStereo",189);
	Elemento* cancion3 = new Elemento("Avalancha","Heroes del Silencio",247);
	Lista* lista = new Lista();
	lista -> agregar(cancion1);
	lista -> agregar(cancion2);
	lista -> agregar(cancion3);
	Elemento *i = lista -> getPrimer();

	while(i != NULL){
		cout << i -> getNombre() << " " << i -> getArtista();
		formatearTiempo(i -> getDuracion());
		cout << "¿Qué desea hacer?" << endl;
		cout << "1- Canción anterior" << endl;
		cout << "2- Canción siguiente" << endl;
		cout << "3- Salir" << endl;
		cout << "Seleccione una opción: ";
		cin >> opcion;
		switch(opcion){
		case 1:
			i = i -> getAnterior();
			break;
		case 2:
			i = i -> getSiguiente();
			break;
		case 3:
			exit(0);

		}
	}
	return 0;
}
