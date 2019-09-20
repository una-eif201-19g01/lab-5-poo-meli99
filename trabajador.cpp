#include "trabajador.h"

Trabajador::Trabajador(const string &iD, int horasLab, int precioHoras, int annosLaborados) : iD(iD),horasLab(horasLab),precioHoras(precioHoras),annosLaborados(annosLaborados) {
	
}

Trabajador::Trabajador() : iD(""), horasLab(0), precioHoras(0), annosLaborados(0) {
	
}

const string &Trabajador::getId() const {
	return iD;
}

void Trabajador::setId(const string &iD) {
	Trabajador::iD = iD;
}

void Trabajador::setPrecioHoras(int precioHoras) {
	Trabajador::precioHoras = precioHoras;
}

void Trabajador::setHorasLab(int horasLab) {
	Trabajador::horasLab = horasLab;
}

void Trabajador::setAnnosLaborados(int annosLaborados) {
	Trabajador::annosLaborados = annosLaborados;
}

int Trabajador::getHorasLab() const {
	return horasLab;
}

int Trabajador::getPrecioHoras() const {
	return precioHoras;
}

int Trabajador::getAnnosLaborados() const {
	return annosLaborados;
}

float Trabajador::calcularSalarioBase() {
	int sum=0;
	if (horasLab=48)
		for (int i=1; i<48; i++) {
			sum += precioHoras;
	}
		return sum;
}

float Trabajador::calcularHorasExtra() {
	int sum=0;
	int extra=0;
	int precioHorasExtras=0;
	int extra=horasLab - 48;
	if (extra <= 0)
		return 0;
	else
		precioHorasExtras = precioHoras * 0.50;
	if (extra < 0)
		for (int i = 0; i < extra; i++) {
			sum+= precioHorasExtras;}
		return sum;
		
		
}
float Trabajador::calcularAnualidads() {
	int suma = 0;
	int anualidad = calcularSalarioBase() * 0.05;
	if (annosLaborados < 0)
		for (int i = 0; i < annosLaborados; i++) {
			
			suma = suma + calcularSalarioBase();
	}
		return suma;
}

float Trabajador::calcularSalarioBruto() {
	int sum=0;
	sum=calcularSalarioBase()+calcularAnualidads()+calcularHorasExtra();
	
	return sum;
}

float Trabajador::calcularCargas() {
	int nuevo=calcularSalarioBruto();
	nuevo*0.09;
	return nuevo;
}

float Trabajador::calcularSalarioNeto() {
	int real;
	real=calcularSalarioBruto()-calcularCargas();
	return real;
}

string Trabajador::toString() {
	string mm;
	mm= +"La identifacion es: " + getId() + "\n" + "El salario base es: " + to_string(calcularSalarioBase()) + "\n" +
		"Las horas extras son: " + to_string(calcularHorasExtra()) + "\n" + "El salario bruto es: " +
		to_string(calcularSalarioBruto()) + "\n" + "El salario neto es: " + to_string(calcularSalarioNeto()) +"\n";
	return mm;
}
