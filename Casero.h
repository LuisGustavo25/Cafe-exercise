#ifndef CASERO_H
#define CASERO_H
#include "Cafe.h"
class Casero : public Cafe{
	public:
	Casero(float precioBase, vector<string> condimentos);
		float calcularCosto();	
		void mostrar();
	~Casero();
};
#endif
