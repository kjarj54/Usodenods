#include "ColeccionTitulos.h"

ColeccionTitulos::ColeccionTitulos(){
	cabeza = NULL;
	fin = NULL;
}

ColeccionTitulos::~ColeccionTitulos()  {
	eliminarLista();
}

NodoTitulo* ColeccionTitulos::buscar(string codigo){
	NodoTitulo *aux = cabeza;
	Coleccion* CO=new Coleccion();
	CO->recuperar();
	while (aux!=NULL) {
		if (aux->getInfo()->getCodigo()==codigo){
			CO->buscar(codigo);
			cout<<aux->getInfo()->getCodigo()<<", "<<aux->getInfo()->getTitulo()<<", "<<aux->getInfo()->getActor()<<",Duracion: "<<
			aux->getInfo()->getDuracion()<<",Año: "<<aux->getInfo()->getAnyo()<<", "<<endl;
		}	
		aux = aux->getSig();
	}
}

NodoTitulo* ColeccionTitulos::buscarTitulo(string titulo){
	NodoTitulo *aux = cabeza;
	Coleccion* CO=new Coleccion();
	CO->recuperar();
	while (aux!=NULL) {
		if (aux->getInfo()->getTitulo()==titulo){
			CO->buscar(aux->getInfo()->getCodigo());
			cout<<aux->getInfo()->getCodigo()<<", "<<aux->getInfo()->getTitulo()<<", "<<aux->getInfo()->getActor()<<",Duracion: "<<
			aux->getInfo()->getDuracion()<<",Año: "<<aux->getInfo()->getAnyo()<<"."<<endl;
		}	
		aux = aux->getSig();
	}
}


bool ColeccionTitulos::vacia(){
	return (cabeza == NULL);
}

void ColeccionTitulos::eliminarLista(){
	NodoTitulo * aux;
	while (fin!=NULL) { //empieza a borrar al final
		aux = fin;
		fin = fin->getAnt();//va borrando de atras hacia adelante
		delete aux;
	}
	cabeza = NULL;
	
}
void ColeccionTitulos::guardar(){
	if (!vacia()) {
		FILE* archivo = fopen("Titulos.txt","wb+");
		NodoTitulo* aux = cabeza;
		while (aux!=NULL) {
			fwrite(aux->getInfo(),sizeof(Titulos),1,archivo);
			aux = aux->getSig();
		}
		fclose(archivo);
	}
}
void ColeccionTitulos::agregar(NodoTitulo* nuevo){
	if (vacia()) {
		cabeza = nuevo;
		fin = nuevo;
	} else {
		fin->setSig(nuevo);
		nuevo->setAnt(fin);
		fin = nuevo;
	}
}

void ColeccionTitulos::recuperar(){
	FILE* archivo = fopen("Titulos.txt","rb+");
	if(archivo !=NULL){
		eliminarLista();
		while (!feof(archivo)) {
			Titulos* nuevo = new Titulos();//crea un buffer de tipo Dato sin inicializar atributos
			if (fread(nuevo,sizeof(Titulos),1,archivo)==1){
				agregar(new NodoTitulo(nuevo));	
			}	
		}
		fclose(archivo);
	}


}

