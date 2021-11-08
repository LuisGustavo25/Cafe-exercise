/*
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
	}*/
