#ifndef GERENTE_H
#define GERENTE_H

#include <string>
#include "trabajador.h"
class Trabajador;
using namespace std;

class Gerente: 

public
	
	Trabajador {
	
private:
	float bonifiacion;
	
public:
	Gerente();
	void setBonifiacion(float bonifiacion);
	float getBonifiacion() const;
	virtual ~Gerente();
	Gerente(float bonifiacion);
};


#endif 
