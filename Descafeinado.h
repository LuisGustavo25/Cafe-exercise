#ifndef DESCAFEINADO_H
#define DESCAFEINADO_H
#include "Cafe.h"

class Descafeinado : public Cafe{
	
	
	public:
	Descafeinado(float precioBase, vector<string> condimentos);
	float calcularCosto();	
	void mostrar();
	
	~Descafeinado();

	
};

#endif
