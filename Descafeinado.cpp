#include "Descafeinado.h"
Descafeinado::Descafeinado(float precioBase, vector<string> condimentos):Cafe(precioBase,condimentos){}

float Descafeinado::calcularCosto(){
	vector <string> condimentos = getCondimentos();
	float precio = getPrecioBase();
	for(int i=0;i<condimentos.size();i++){
		string str=condimentos[i];
		if(str=="leche"){			
			precio+=4.0;
		}else if(str=="chocolate"){			
			precio+=5.0;
		}else if(str=="crema"){
			precio+=6.0;
		}			
	}
	return precio;
}

void Descafeinado::mostrar(){
	cout<<"Cafe Descafeinado ";
		Cafe::mostrar();
	cout<<endl;
}
Descafeinado::~Descafeinado(){}
