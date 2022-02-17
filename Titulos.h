#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <cstdio>
#include <String.h>
using namespace std;
#define TAM 50
#include "Coleccion.h"
#if !defined(_TITULOS_H)
#define _TITULOS_H
class Titulos{
private:
	char codigo[TAM];
	char titulo[TAM];
	char actor[TAM];
	char duracion[TAM];
	char anyo[TAM];
public:
	Titulos();	
	Titulos(string codigo,string titulo,string actor, string duracion,string anyo);
	string getCodigo();
	string getTitulo();
	string getActor();
	string getDuracion();
	string getAnyo();
};



#endif

