#include "Titulos.h"

Titulos::Titulos(){
	
}

Titulos::Titulos(string codigo,string titulo,string actor, string duracion,string anyo){
	strcpy(this->codigo,codigo.c_str());
	strcpy(this->titulo,titulo.c_str());
	strcpy(this->actor,actor.c_str());
	strcpy(this->duracion,duracion.c_str());
	strcpy(this->anyo,anyo.c_str());	
}

string Titulos::getCodigo(){
	return codigo;
}

string Titulos::getTitulo(){
	return titulo;
}

string Titulos::getActor(){
	return actor;
}
	
string Titulos::getDuracion(){
	return duracion;
}
	
string Titulos::getAnyo(){
	return anyo;
}
	

	
	
	
	
