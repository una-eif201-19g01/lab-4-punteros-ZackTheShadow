/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  main
 *
 *        Created:  2019-08-27
 *
 *         Author:  Isaac Esquivel
 *
 * =====================================================================================
 */

#include <iostream>
#include "Empleado.h"

int main() {
    Empleado empleado[4];

    empleado[0].setNombre("Mike");
    empleado[0].setAExp(2);
    empleado[0].setSalarioB(1200000);

	empleado[1].setNombre("Sebastian");
	empleado[1].setAExp(3);
	empleado[1].setSalarioB(1600000);

	empleado[2].setNombre("Carolina");
	empleado[2].setAExp(8);
	empleado[2].setSalarioB(1800000);

	empleado[3].setNombre("Emma");
	empleado[3].setAExp(1);
	empleado[3].setSalarioB(800000);

	for (int cont = 0; cont < 4; cont++)
	{
		std::cout << empleado[cont].obenerReporteEmpleados() << std::endl;
	}
    return 0;
}