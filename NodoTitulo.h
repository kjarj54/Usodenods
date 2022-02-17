#include "Titulos.h"

#if !defined(_NODOTITULO_H)
#define _NODOTITULO_H


class NodoTitulo{
private:
	Titulos* info;
	NodoTitulo* sig;
	NodoTitulo* ant;
public:
	NodoTitulo(Titulos* nuevo);
	~NodoTitulo();
	Titulos* getInfo();
	void setInfo(Titulos* nuevo);	
	void setSig(NodoTitulo* sig);
	NodoTitulo* getSig();
	void setAnt(NodoTitulo* Ant);
	NodoTitulo* getAnt();

};

#endif  //_NODO_H
