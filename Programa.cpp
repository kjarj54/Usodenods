#include "Programa.h"



Programa::Programa(){
	
	
}
void Programa::run(){
	
	int res;
	char r;
	string cat;
	string cod;
	string cod2;
	string des;
	string titulo;
	string titulo2;
	string anyo;
	string actor;
	string duracion;
	Coleccion* CO=new Coleccion();
	ColeccionTitulos* CT=new ColeccionTitulos();
	Categoria* C;
	Titulos* T;
	Nodo* nuevoNodo;
	NodoTitulo* nodoTitulo;
	do{
		system("cls");
		
		cout<<"" 
        "\n" 
        "\n"
        "\n"
        "\nProfesor: " 
        "\n\n"
		<<endl;
		 
		cout<<"-----------------------Menú----------------------------------" 
        "\n1.Añadir nueva categoria" 
        "\t2.Agregar titulo"
        "\n3.Listar todas las categorias"
        "\t4.Listar todos los titulos por codigo de categoria"
        "\n5.Buscar titulo por nombre y mostrar la informacion junto a su categoria"
        "\n6.Salir"
		<<endl;
								
		cout<<"Digite el numero de la opción que desea\n";
		cin>>res;
		system("cls");
		switch(res){
		
			case 1:
				system("cls");
				CO->recuperar();
				cout<<"Digite el nombre de la categoria remplasar espacio en blanco por "<<"_"<<"\n";
				cin>>cat;
				
				cout<<"Digite un codigo para la categoria\n";
				cin>>cod;
				
				cout<<"Digite una descipcion remplasar espacio en blanco por "<<"_"<<"\n";
				cin>>des;
				
				nuevoNodo=new Nodo(new Categoria(cat,cod,des));
				CO->agregar(nuevoNodo);
				CO->guardar();
				cout<<endl<<"Desea realizar otra acción? Digite S=Si o N=NO" <<endl;
				cin>>r;					
				break;
				
			case 2:
				system("cls");
				CT->recuperar();
				cout<<"Digite el codigo al cual pertenece el titulo remplasar espacio en blanco por "<<"_"<<"\n";
				cin>>cod2;
				
				cout<<"Digite el titulo remplasar espacio en blanco por "<<"_"<<"\n";
				cin>>titulo;
				
				cout<<"Digite el actor principal remplasar espacio en blanco por "<<"_"<<"\n";
				cin>>actor;
				
				cout<<"Digite la duracion del titulo\n"
						"Ejemplo: horas:minutos:segundo / 1:30:20\n";
				cin>>duracion;
				
				cout<<"Digite el año de estreno\n"
						"Ejemplo: Año / 2000 \n";
				cin>>anyo;
				
				nodoTitulo=new NodoTitulo(new Titulos(cod2,titulo,actor,duracion,anyo));
				CT->agregar(nodoTitulo);	
				CT->guardar();
				
				cout<<endl<<"Desea realizar otra acción? Digite S=Si o N=NO" <<endl;
				cin>>r;						
				break;
					
			case 3:
				system("cls");
				CO->recuperar();
				CO->imprimirLista();
				
				cout<<endl<<"Desea realizar otra acción? Digite S=Si o N=NO" <<endl;
				cin>>r;						
				break;
				
			case 4:
				system("cls");
				CT->recuperar();
				cout<<"Digite el codigo de la categoria\n";
				cin>>cod2;
				CT->buscar(cod2);
				
				
				cout<<endl<<"Desea realizar otra acción? Digite S=Si o N=NO" <<endl;
				cin>>r;						
				break;
				
			case 5:
				system("cls");
				CT->recuperar();
				cout<<"Dijite el titulo de lo que desea buscar remplasar espacio en blanco por "<<"_"<<"\n";
				cin>>titulo2;
				CT->buscarTitulo(titulo2);
				
				cout<<endl<<"Desea realizar otra acción? Digite S=Si o N=NO" <<endl;
				cin>>r;	
				break;
				
			case 6:
				r='n';					
				break;
		}
						
	}while(r == 's' || r == 'S');
	
	
}





