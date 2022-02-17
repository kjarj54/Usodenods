#include "Programa.h"
int main(int argc, char** argv)
{
	setlocale(LC_ALL,"");//actualiza la tabla ASCII para que salgan tildes y la letra ñ en pantalla
	Programa *P=new Programa();
	P->run();
	return 0;
}
