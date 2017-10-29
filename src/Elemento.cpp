/*
 * Elemento.cpp
 *
 *  Created on: Oct 29, 2017
 *      Author: raydeltohernandez
 */

#include "Elemento.h"
#include <cstdlib>

Elemento::Elemento(string nombre , string artista, int duracion): _siguiente(NULL), _anterior(NULL) {
	_nombre = nombre;
	_artista = artista;
	_duracion = duracion;
}

Elemento::~Elemento() {
	// TODO Auto-generated destructor stub
}

