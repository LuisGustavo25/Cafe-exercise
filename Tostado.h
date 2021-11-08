#ifndef TOSTADO_H
#define TOSTADO_H
#include "Cafe.h"

class Tostado : public Cafe{
	
	
	public:
	Tostado(float precioBase, vector<string> condimentos);
	float calcularCosto();	
	void mostrar();
	
	~Tostado();

	
};

#endif
