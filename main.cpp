#include <iostream>
#include "Principal.h"
//Luis Gustavo Acosta Ruiz #27094404
int main() {
	Principal CAFE;
	CAFE.cargarInfo();
	CAFE.totalRecaudado();	
		cout<<endl;cout<<endl;cout<<endl;cout<<endl;
	CAFE.listadoVentas();
		cout<<endl;cout<<endl;cout<<endl;cout<<endl;	
	CAFE.listado("Ex");
		cout<<endl;cout<<endl;cout<<endl;cout<<endl;
	CAFE.listado("De");
		cout<<endl;cout<<endl;cout<<endl;cout<<endl;
	CAFE.listado("Ca");
		cout<<endl;cout<<endl;cout<<endl;cout<<endl;
	CAFE.listado("To");
		cout<<endl<<"made with <3"<<endl;cout<<endl;cout<<endl;cout<<endl;
	return 0;
}
