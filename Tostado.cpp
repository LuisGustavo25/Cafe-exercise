#include "Tostado.h"
Tostado::Tostado(float precioBase, vector<string> condimentos):Cafe(precioBase,condimentos){}

float Tostado::calcularCosto(){
	vector <string> condimentos = getCondimentos();
	float precio = getPrecioBase();
	for(int i=0;i<condimentos.size();i++){
		string str=condimentos[i];
		if(str=="leche"){			
			precio+=7.0;
		}else if(str=="chocolate"){			
			precio+=8.0;
		}else if(str=="crema"){
			precio+=10.0;
		}			
	}
	return precio;
}

void Tostado::mostrar(){
	cout<<"Cafe Tostado ";
		Cafe::mostrar();
	cout<<endl;
}
Tostado::~Tostado(){}
