#ifndef CAFE_H
#define CAFE_H
#include <vector>
#include <String>
#include <iostream>
#include <algorithm>
using namespace std;
class Cafe{
	private:
	float precioBase;
	vector<string> condimentos;
	public:Cafe(float precioBase, vector<string> condimentos);
			float getPrecioBase();
			vector<string> getCondimentos();
			string getDescripcion();
			virtual void mostrar();
			virtual float calcularCosto()=0;
			~Cafe();	
};
#endif
