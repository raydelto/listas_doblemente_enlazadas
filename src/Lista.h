/*
 * Lista.h
 *
 *  Created on: Oct 29, 2017
 *      Author: raydeltohernandez
 */

#ifndef LISTA_H_
#define LISTA_H_
#include "Elemento.h"

class Lista {
private:
	Elemento* _primer;
	Elemento* _ultimo;
public:
	void agregar(Elemento* elemento);
	Lista();
	virtual ~Lista();

	Elemento* getPrimer() { return _primer;	}

	void setPrimer(Elemento* primer) {	_primer = primer;	}

	Elemento* getUltimo() { 	return _ultimo;	}

	void setUltimo(Elemento* ultimo) { _ultimo = ultimo; };

};

#endif /* LISTA_H_ */
