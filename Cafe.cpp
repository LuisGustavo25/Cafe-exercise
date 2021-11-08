#include "Cafe.h"
Cafe::Cafe(float precioBase, vector<string> condimentos){
	this->precioBase=precioBase;
	this->condimentos=condimentos;
}

float Cafe::getPrecioBase(){
	return precioBase;
}
vector<string> Cafe::getCondimentos(){
	return condimentos;
}


string Cafe::getDescripcion(){
	string r;
	vector<string> unicos;
	
	for(int i=0;i<condimentos.size();i++) {
		if(unicos.empty()){			
			unicos.push_back(condimentos[i]);
		}
		if(find(unicos.begin(),unicos.end(),condimentos[i])==unicos.end()){			
			unicos.push_back(condimentos[i]);
		}
	}
	
	if(unicos.size()>0){	
		r="con ";
		for(int i=0;i<unicos.size();i++) {				
			r.append(unicos[i]);
				if(i == (unicos.size()-2) && i!=0){
					r.append(" y ");
				}else if(i < (unicos.size()-1)){
					r.append(", ");
			}		
		}
		r.append(".");
	}else{
		r="sin condimentos.";
	}
	return r;
}

void Cafe::mostrar(){	
	cout<<getDescripcion();
}
Cafe::~Cafe(){}
