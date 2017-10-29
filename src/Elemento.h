/*
 * Elemento.h
 *
 *  Created on: Oct 29, 2017
 *      Author: raydeltohernandez
 */

#ifndef ELEMENTO_H_
#define ELEMENTO_H_
#include <string>
using namespace std;
class Elemento {
private:
	Elemento* _anterior;
	Elemento* _siguiente;
	string _nombre;
	string _artista;
	int _duracion;
public:
	Elemento(string nombre,string artista, int duracion);

	virtual ~Elemento();

	Elemento* getAnterior() { return _anterior;	}

	void setAnterior(Elemento* anterior) {	_anterior = anterior; }

	Elemento* getSiguiente() { return _siguiente; }

	void setSiguiente(Elemento* siguiente) { 	_siguiente = siguiente;  }

	string getArtista()  { return _artista; }

	int getDuracion()  { return _duracion;	}

	string getNombre()  { return _nombre;	}
};

#endif /* ELEMENTO_H_ */
