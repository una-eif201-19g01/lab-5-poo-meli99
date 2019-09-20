#ifndef SECRETARIA_H
#define SECRETARIA_H

#include <iostream>
#include "Trabajador.h"
class Trabajador;
using namespace std;
class Secretaria: public Trabajador {
	
public:
	
	Secretaria();
	Secretaria(const string &iD, int horasLab, int precioHoras, int annosLaborados);
	virtual float calcularSalarioBase()=0;
	virtual float calcularHorasExtra()=0;
	virtual float calcularAnualidads()=0;
	virtual float calcularSalarioBruto()=0;
	virtual float calcularCargas()=0;
	virtual float calcularSalarioNeto()=0;
	
};

#endif
