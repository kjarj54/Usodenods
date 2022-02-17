#include "Categoria.h"

#if !defined(_NODO_H)
#define _NODO_H


class Nodo {
private:
	Categoria* info;
	Nodo* sig;
	Nodo* ant;
public:
	Nodo(Categoria* nuevo);
	~Nodo();
	Categoria* getInfo();
	void setInfo(Categoria* nuevo);	
	void setSig(Nodo* sig);
	Nodo* getSig();
	void setAnt(Nodo* Ant);
	Nodo* getAnt();

};

#endif  //_NODO_H
