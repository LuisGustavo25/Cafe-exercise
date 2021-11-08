#include "Casero.h"
Casero::Casero(float precioBase, vector<string> condimentos):Cafe(precioBase,condimentos){}

float Casero::calcularCosto(){
	vector <string> condimentos = getCondimentos();
		float precio = getPrecioBase();
	for(int i=0;i<condimentos.size();i++){
		string str=condimentos[i];
		if(str=="leche"){			
			precio+=6.0;
		}else if(str=="chocolate"){			
			precio+=6.0;
		}else if(str=="crema"){
			precio+=6.0;
		}			
	}
	return precio;
}

void Casero::mostrar(){
	cout<<"Cafe Casero ";
	Cafe::mostrar();
	cout<<endl;
}
Casero::~Casero(){}
