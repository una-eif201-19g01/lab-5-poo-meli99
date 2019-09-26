#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "trabajador.h"
class Trabajador;
using namespace std;
class Vendedor: public Trabajador {
	
private:
	float comision;
	int ventas;
	
public:
	
	Vendedor();
	void setComision(float comision);
	float getComision() const;
	virtual ~Vendedor();
	Vendedor(float comision, int ventas);
};


#endif
