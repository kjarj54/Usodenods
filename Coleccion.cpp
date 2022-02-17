#include "Coleccion.h"

Coleccion::Coleccion(){
	cabeza = NULL;
	fin = NULL;
}

Coleccion::~Coleccion()  {
	eliminarLista();
}

void Coleccion::imprimirLista(){
	Nodo* aux = cabeza;
	while (aux != NULL) {
		cout << aux->getInfo()->getNombreCat()<<", "<<aux->getInfo()->getCodigo()<<", "<<aux->getInfo()->getDescripcion()<<".\n";
		aux = aux->getSig();
	}
}

Nodo* Coleccion::buscar(string codigo){
	Nodo *aux = cabeza;
	while (aux!=NULL) {
		if (aux->getInfo()->getCodigo()==codigo){
			cout<<"Categoria: "<<aux->getInfo()->getNombreCat()<<endl;
		}	
		aux = aux->getSig();
	}
}
bool Coleccion::vacia(){
	return (cabeza == NULL);
}
void Coleccion::eliminarLista(){
	Nodo * aux;
	while (fin!=NULL) { //empieza a borrar al final
		aux = fin;
		fin = fin->getAnt();//va borrando de atras hacia adelante
		delete aux;
	}
	cabeza = NULL;
}

void Coleccion::guardar(){
	if (!vacia()) {
		FILE* archivo = fopen("Categorias.txt","wb+");
		Nodo* aux = cabeza;
		while (aux!=NULL) {
			fwrite(aux->getInfo(),sizeof(Categoria),1,archivo);
			aux = aux->getSig();
		}
		fclose(archivo);
	}
}
void Coleccion::agregar(Nodo* nuevo){
	if (vacia()) {
		cabeza = nuevo;
		fin = nuevo;
	} else {
		fin->setSig(nuevo);
		nuevo->setAnt(fin);
		fin = nuevo;
	}
}

void Coleccion::recuperar(){
	FILE* archivo = fopen("Categorias.txt","rb+");
	if(archivo !=NULL){
		eliminarLista();
		while (!feof(archivo)) {
		Categoria* nuevo = new Categoria();//crea un buffer de tipo Dato sin inicializar atributos
			if (fread(nuevo,sizeof(Categoria),1,archivo)==1)
				agregar(new Nodo(nuevo));
			}
		fclose(archivo);	
	}

}

