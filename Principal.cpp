#include "Principal.h"
//#Luis Gustavo Acosta Ruiz # 27.094.404
Principal::Principal(){}
void Principal::cargarInfo(){
	cafeVendido.clear();//clear data from previus cafeVendido
	float ex,de,ca,to;
	for(int i=0;i< preciosCafe.size();i++){
			string str = preciosCafe[i];
		char *cstr = new char[str.length()+1];
			strcpy(cstr,str.c_str());
		char *token = strtok(cstr,"-");
		if(strcmp(token,"Ex")==0){			
			token = strtok(NULL,"-");
				ex = atof(token);
		}		
		if(strcmp(token,"De")==0){			
			token = strtok(NULL,"-");
				de = atof(token);
		}
		if(strcmp(token,"Ca")==0){			
			token = strtok(NULL,"-");
				ca = atof(token);
		}
		if(strcmp(token,"To")==0){			
			token = strtok(NULL,"-");
				to = atof(token);
		}
		delete cstr; //clear csrts data
	}	
	
	for(int i=0;i<ventasCafe.size();i++){		
			string str = ventasCafe[i];
		char *cstr = new char[str.length()+1];
			strcpy(cstr,str.c_str());
		char *token = strtok(cstr,"-");
			string tipo = token;
			vector<string> condimentos;
			token = strtok(NULL,",");
	
		while(token != NULL){
			condimentos.push_back((string)token);			
				token=strtok(NULL,",");
		}
		if(tipo=="Ex"){
			Cafe *cafe = new Expreso(ex,condimentos);
				cafeVendido.push_back(cafe);
		}else if(tipo=="Ca"){
			Cafe *cafe = new Casero(ca,condimentos);
				cafeVendido.push_back(cafe);
		}else if(tipo=="De"){
			Cafe *cafe = new Descafeinado(de,condimentos);
				cafeVendido.push_back(cafe);
		}else if(tipo=="To"){
			Cafe *cafe = new Tostado(to,condimentos);
				cafeVendido.push_back(cafe);
		}
	}
}

void Principal::totalRecaudado(){
	float total=0;	
	for(int i=0;i<cafeVendido.size();i++){		
		total+=cafeVendido[i]->calcularCosto();
	}
	cout<<"*****************CAFEUNET************************"<<total<<endl;
	cout<<"Total recaudado por Cafeteria: "<<total<<"$"<<endl;
	cout<<"*****************CAFEUNET************************"<<total<<endl;
}

bool comp(Cafe *a, Cafe *b){
	int aa,bb;
	
	if(typeid(*a)==typeid(Casero)){
		aa=1;
	}else if(typeid(*a)==typeid(Descafeinado)){
		aa=2;
	}else if(typeid(*a)==typeid(Tostado)){
		aa=3;
	}else if(typeid(*a)==typeid(Expreso)){
		aa=4;
	}
	
	if(typeid(*b)==typeid(Casero)){
		bb=1;
	}else if(typeid(*b)==typeid(Descafeinado)){
		bb=2;
	}else if(typeid(*b)==typeid(Tostado)){
		bb=3;
	}else if(typeid(*b)==typeid(Expreso)){
		bb=4;
	}	
	return aa<bb;
}

void Principal::listadoVentas(){
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"*Tipo de Cafe   *Descripcion                     *Monto a pagar"<<endl;
	sort(cafeVendido.begin(),cafeVendido.end(),comp);
	for(int i=0;i<cafeVendido.size();i++){
		string tipo;
		Cafe *cafe= cafeVendido[i];
		if(typeid(*cafe)==typeid(Casero)){
			tipo="-Casero-";
		}else if(typeid(*cafe)==typeid(Descafeinado)){
			tipo="-Descafeinado-";
		}else if(typeid(*cafe)==typeid(Tostado)){
			tipo="-Tostado-";
		}else if(typeid(*cafe)==typeid(Expreso)){
			tipo="-Expreso-";
		}
		string descripcion = cafe->getDescripcion();
		float costo = cafe->calcularCosto();
		cout<<left;
		cout<<setw(15);
		cout<<tipo;
		cout<<setw(30);
		cout<<descripcion;
		cout<<right;
		cout<<setw(15);
		cout<<costo<<endl;
	}
}

void Principal::listado(string tipo){
	string tipoFull;
	if(tipo=="Ex"){
		tipoFull="Expreso";
	}else if(tipo=="Ca"){
		tipoFull="Casero";
	}else if(tipo=="De"){
		tipoFull="Descafeinado";
	}else if(tipo=="To"){
		tipoFull="Tostado";
	}
	
	cout<<"*Cafes Vendidos de tipo: "<<tipoFull<<endl;
	cout<<"*Descripcion                     *Monto a pagar en $"<<endl;
	int total=0;
	for(int i=0;i<cafeVendido.size();i++){
		Cafe* cafe=cafeVendido[i];
		string descripcion;
		float costo=-1;
		if(tipo=="Ex" && typeid(*cafe)==typeid(Expreso)){			
			descripcion=cafe->getDescripcion();
			costo=cafe->calcularCosto();
		}else if(tipo=="De" && typeid(*cafe)==typeid(Descafeinado)){			
			descripcion=cafe->getDescripcion();
			costo=cafe->calcularCosto();
		}else if(tipo=="Ca" && typeid(*cafe)==typeid(Casero)){			
			descripcion=cafe->getDescripcion();
			costo=cafe->calcularCosto();
		}else if(tipo=="To" && typeid(*cafe)==typeid(Tostado)){			
			descripcion=cafe->getDescripcion();
			costo=cafe->calcularCosto();
		}
		
		if(costo>0){
			cout<<left;
			cout<<setw(30);
			cout<<descripcion;
			cout<<right;
			cout<<setw(15);
			cout<<costo<<endl;
			total++;
		}
	}
	cout<<"\nTotal Cafes Vendidos "<<total<<"$"<<endl;
	cout<<"-------------------------------------------------------"<<endl;
}
Principal::~Principal(){}
