#include "NodoTitulo.h"

NodoTitulo::NodoTitulo(Titulos* nuevo) {
	info = nuevo;
	sig = NULL;
	ant = NULL;
}
NodoTitulo::~NodoTitulo(){
	delete info;
}

void NodoTitulo::setInfo(Titulos* nuevo){
	info = nuevo;
}

Titulos* NodoTitulo::getInfo() {
	return info;
}

void NodoTitulo::setSig(NodoTitulo* sig) {
	this->sig = sig;
}

NodoTitulo* NodoTitulo::getSig() {
	return sig;
}

void NodoTitulo::setAnt(NodoTitulo* ant) {
	this->ant = ant;
}

NodoTitulo* NodoTitulo::getAnt() {
	return ant;
}

