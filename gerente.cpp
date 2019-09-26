#include "trabajador.h"
#include "gerente.h"

Gerente::Gerente() {
}
void Gerente::setBonifiacion(float bonifiacion) {
	Gerente::bonifiacion = bonifiacion;
}

float Gerente::getBonifiacion() const {
	return bonifiacion;
}
Gerente::~Gerente() {
}

Gerente::Gerente(float bonifiacion) : bonifiacion(bonifiacion) {
}

