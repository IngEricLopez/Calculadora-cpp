#pragma once

#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <string>
#include <vector>

class Calculadora {
private:
	std::vector<std::string> historial;
public:
	double sumar(double a, double b);
	double restar(double a, double b);
	double multiplicar(double a, double b);
	double dividir(double a, double b);
	void mostrarHistorial() const;
};

#endif
