#ifndef EXPRESO_H
#define EXPRESO_H
#include "Cafe.h"

class Expreso : public Cafe{
	
	
	public:
	Expreso(float precioBase, vector<string> condimentos);
	float calcularCosto();	
	void mostrar();
	
	~Expreso();

	
};

#endif
