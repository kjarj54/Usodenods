#include "NodoTitulo.h"

#if !defined(_COLECCIONTITULOS_H)
#define _COLECCIONTITULOS_H


class ColeccionTitulos{
protected:
	NodoTitulo* cabeza;
	NodoTitulo* fin;
public:
	ColeccionTitulos();
	~ColeccionTitulos();
	bool vacia();
	NodoTitulo* buscar(string codigo);
	NodoTitulo* buscarTitulo(string titulo);
	void eliminarLista();
	void agregar(NodoTitulo* nuevo);
	void guardar();
	void recuperar();

};

#endif  //_COLECCION_H
