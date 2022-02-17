#include "Nodo.h"

Nodo::Nodo(Categoria* nuevo) {
	info = nuevo;
	sig = NULL;
	ant = NULL;
}
Nodo::~Nodo(){
	delete info;
}

void Nodo::setInfo(Categoria* nuevo){
	info = nuevo;
}

Categoria* Nodo::getInfo() {
	return info;
}

void Nodo::setSig(Nodo* sig) {
	this->sig = sig;
}

Nodo* Nodo::getSig() {
	return sig;
}

void Nodo::setAnt(Nodo* ant) {
	this->ant = ant;
}

Nodo* Nodo::getAnt() {
	return ant;
}


