#include "Calculadora.h"
#include <stdexcept>
#include <iostream>

double Calculadora::sumar(double a, double b) {
	double r = a + b;
	historial.push_back(std::to_string(a) + " + " + std::to_string(b) + " = " + std::to_string(r));
	return r;
}

double Calculadora::restar(double a, double b) {
	double r = a - b;
	historial.push_back(std::to_string(a) + " - " + std::to_string(b) + " = " + std::to_string(r));
	return r;
}

double Calculadora::multiplicar(double a, double b) {
	double r = a * b;
	historial.push_back(std::to_string(a) + " * " + std::to_string(b) + " = " + std::to_string(r));
	return r;
}

double Calculadora::dividir(double a, double b) {
	if (b == 0){
		throw std::invalid_argument("Error: divición por 0");
	}
	double r = a / b;
	historial.push_back(std::to_string(a) + " / " + std::to_string(b) + " = " + std::to_string(r));
	return r;
}

void Calculadora::mostrarHistorial() const {
	std::cout << "\n--- Historial de operaciones ---\n";
	for (const auto& linea : historial) {
		std::cout << linea << "\n";
	}
}