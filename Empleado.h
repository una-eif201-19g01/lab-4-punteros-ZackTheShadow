/*
 * =====================================================================================
 *
 *       Filename:  Empleado.h
 *
 *    Description:  Definición de la Clase Empleado
 *
 *        Created:  2019-08-27
 *
 *         Author:  Isaac Esquivel
 *
 * =====================================================================================
 */


#ifndef EMPLEADOPUNTEROS_EMPLEADO_H
#define EMPLEADOPUNTEROS_EMPLEADO_H


#include <string>

const int numId = 100;

class Empleado {

protected:

	int id;
	std::string nombre;
	int aExp;
	float salarioB;
	bool suerte;


private:
	static void banderaRevision(bool*);
	float aumentarSalario(int *);

public:

	Empleado();

	Empleado(const std::string &nombre, int &aExp, float salarioB);

	std::string obenerReporteEmpleados();

	void setNombre(std::string nombre);
	void setAExp(int aEXP);
	void setSalarioB(float salarioBa);
	void setSuerte(bool suerteT);

	int getId();
	std::string getNombre();
	int getAExp();
	float getSalarioB();

};

#endif //EMPLEADOPUNTEROS_EMPLEADO_H
