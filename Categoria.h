#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <cstdio>
#include <String.h>
using namespace std;
#define TAM 50
#define TAMDES 200
#if !defined(_CATEGORIA_H)
#define _CATEGORIA_H
class Categoria{
private:
	char nombreCat[TAM];
	char codigo[TAM];
	char descripcion[TAMDES];
public:
	Categoria();
	Categoria(string nombreCat,string codigo,string descripcion);
	string getNombreCat();
	string getCodigo();
	string getDescripcion();
		
	
	
	
};




#endif
