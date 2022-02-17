#include "Categoria.h"

Categoria::Categoria(){
	
}

Categoria::Categoria(string nombreCat,string codigo,string descripcion){
	strcpy(this->nombreCat,nombreCat.c_str());
	strcpy(this->codigo,codigo.c_str());
	strcpy(this->descripcion,descripcion.c_str());
	
}


string Categoria::getCodigo(){
	return codigo;
}

string Categoria::getDescripcion(){
	return descripcion;
}

string Categoria::getNombreCat(){
	return nombreCat;
}
