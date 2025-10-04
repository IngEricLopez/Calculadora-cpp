#include <iostream>
#include "Calculadora.h"

int main() {
	Calculadora calc;
	double a, b;
	int opcion;
	do {
		std::cout << "=== Calculadora ===\n";
		std::cout << "1. Sumar\n2. Restar\n3. Multiplicar\n4. Dividir\n5. Historial de operaciones\n0. Salir\n";
		std::cout << "Seleccione una opción: ";
		std::cin >> opcion;

		if (opcion == 0) break;

		std::cout << "Ingrese el primer número: ";
		std::cin >> a;
		std::cout << "Ingrese el segundo número: ";
		std::cin >> b;

		try {
			switch (opcion) {
			case 1: std::cout << "Resultado: " << calc.sumar(a, b) << "\n"; break;
			case 2: std::cout << "Resultado: " << calc.restar(a, b) << "\n"; break;
			case 3: std::cout << "Resultado: " << calc.multiplicar(a, b) << "\n"; break;
			case 4: std::cout << "Resultado: " << calc.dividir(a, b) << "\n"; break;
			case 5: calc.mostrarHistorial(); break;
			default: std::cout << "Opción no valida. \n"; continue;
			}
		}
		catch (const std::exception e) {
			std::cerr << e.what() << "\n";
		}

	} while (true);
	
	return 0;
}