/*
 * =====================================================================================
 *
 *       Filename:  Empleado.cpp
 *
 *    Description:  Implementación de la Clase Empleado
 *
 *        Created:  2019-08-27
 *
 *         Author:  Isaac Esquivel
 *
 * =====================================================================================
 */
#include<stdlib.h>
#include<time.h>
#include "Empleado.h"

Empleado::Empleado()
{
	id = rand() % numId;
}



Empleado::Empleado(const std::string &nombre, int &aExp, float salarioB): nombre(nombre), aExp(aExp), salarioB(salarioB)
{
	id = rand() % numId;
}


void Empleado::banderaRevision(bool *suerte)
{
	if (rand () %2 == 0)
	{
		*suerte = true;
	}
	else
	{
		*suerte = false;
	}
}

float Empleado::aumentarSalario(int *aExp)
{
	float salario = getSalarioB();
	float aumento1 = 102;
	float aumento2 = 105;

	if (*aExp > 0 && *aExp < 3)
	{
		aumento1 = aumento1 + getAExp();
		salario = salario / 100 * aumento1;
		return salario;
	}
	else
		if (*aExp >= 3)
		{
			aumento2 = aumento2 + getAExp();
			salario = salario / 100 * aumento2;
			return salario;
		}
		else
			return salario;
}




std::string Empleado::obenerReporteEmpleados()
{
	std::string reporte = "";

	reporte = reporte + "Empleado # [" + std::to_string(getId()) + "]\n\tNombre [" + getNombre() + "]\n\t"
		+ "Años de experiencia [" + std::to_string(getAExp()) + "]\n\tSalario inicial [" + std::to_string(getSalarioB())
		+ "]\n\tSalario acumulado [" + std::to_string(aumentarSalario(&aExp)) + "]\n\tNecesita revision [";

		if (suerte == true)
	{
		 reporte = reporte + "Si";
	}
		else
	{
		reporte = reporte + "No";
	}
	reporte = reporte + "]\n";

	return reporte;
}




void Empleado::setNombre(std::string nombres)
{
	nombre = nombres;
}


void Empleado::setAExp(int aEXP)
{
	aExp = aEXP;
}

void Empleado::setSalarioB(float salarioBa)
{
	salarioB = salarioBa;
}

void Empleado::setSuerte(bool suerteT)
{
	suerte = suerteT;
}

int Empleado::getId()
{
	return id;
}

std::string Empleado::getNombre()
{
	return nombre;
}


int Empleado::getAExp()
{
	return aExp;
}


float Empleado::getSalarioB()
{
	return salarioB;
}



