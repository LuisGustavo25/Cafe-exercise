#ifndef PRINCIPAL_H
#define PRINCIPAL_H
#include <vector>
#include <iostream>
#include <iomanip>
#include <typeinfo>
#include <cstring>
#include "Cafe.h"
#include "Expreso.h"
#include "Casero.h"
#include "Tostado.h"
#include "Descafeinado.h"
#include "Informacion.h"
using namespace std;
class Principal
{
	private:vector<Cafe*> cafeVendido;	
	public:
		Principal();
			void cargarInfo();
			void totalRecaudado();
			void listado(string tipo);
			void listadoVentas();
		~Principal();
};
#endif
