#ifndef TRABAJADOR_H
#define TRABAJADOR_H

#include <string>
using namespace std;

class Trabajador {
	
private:
	string iD;
	int horasLab;
	int precioHoras;
	int annosLaborados;
	
public:
	Trabajador(const string &iD, int horasLab, int precioHoras, int annosLaborados);
	
	Trabajador();
	
	const string &getId() const;
	
	void setId(const string &iD);
	void setPrecioHoras(int precioHoras);
	void setHorasLab(int horasLab);
	void setAnnosLaborados(int annosLaborados);
	int getHorasLab() const;
	int getPrecioHoras() const;
	int getAnnosLaborados() const;
	virtual float calcularSalarioBase()=0;
	virtual float calcularHorasExtra()=0;
	virtual float calcularAnualidads()=0;
	virtual float calcularSalarioBruto()=0;
	virtual float calcularCargas()=0;
	virtual float calcularSalarioNeto()=0;
	string toString();
};


#endif
