/*
 * Lista.cpp
 *
 *  Created on: Oct 29, 2017
 *      Author: raydeltohernandez
 */

#include "Lista.h"
#include <cstdlib>

Lista::Lista(): _primer(NULL) , _ultimo(NULL) {
}

void Lista::agregar(Elemento* elemento) {
	//Verificando si la lista está vacía
	if(_primer == NULL){
		_primer = elemento;
		_ultimo = elemento;
	}else{ //Si la lista no está vacía
		_ultimo -> setSiguiente(elemento);
		elemento -> setAnterior(_ultimo);
		_ultimo = elemento;
	}
}

Lista::~Lista() {
}

