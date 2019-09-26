#include "vendedor.h"

Vendedor::Vendedor() {
}

void Vendedor::setComision(float comision) {
	Vendedor::comision = comision;
}

float Vendedor::getComision() const {
	return comision;
}

Vendedor::~Vendedor() {
}

Vendedor::Vendedor(float comision, int ventas) : comision(comision), ventas(ventas) {
}
