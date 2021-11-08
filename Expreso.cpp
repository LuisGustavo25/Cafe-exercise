#include "Expreso.h"
Expreso::Expreso(float precioBase, vector<string> condimentos):Cafe(precioBase,condimentos){}

float Expreso::calcularCosto(){
	vector <string> condimentos = getCondimentos();
	float precio = getPrecioBase();
	for(int i=0;i<condimentos.size();i++){
		string str=condimentos[i];
		if(str=="leche"){			
			precio+=5.0;
		}else if(str=="chocolate"){			
			precio+=7.0;
		}else if(str=="crema"){
			precio+=8.0;
		}			
	}
	return precio;
}

void Expreso::mostrar(){
	cout<<"Cafe Expreso ";
		Cafe::mostrar();
	cout<<endl;
}
Expreso::~Expreso(){}
