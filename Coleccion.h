#include "Nodo.h"

#if !defined(_COLECCION_H)
#define _COLECCION_H


class Coleccion {
protected:
	Nodo* cabeza;
	Nodo* fin;
public:
	Coleccion();
	~Coleccion();
	bool vacia();
	void imprimirLista();
	Nodo* buscar(string codigo);
	void eliminarLista();
	void agregar(Nodo* nuevo);
	void guardar();
	void recuperar();

};

#endif  //_COLECCION_H
