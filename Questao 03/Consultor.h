#ifndef CONSULTOR_H_INCLUDED
#define CONSULTOR_H_INCLUDED
#include "Funcionario.h"

class Consultor: public Funcionario{

	public:
		Consultor();
		Consultor(std::string, std::string, double);
		virtual ~Consultor();

		double getSalario();
		double getSalario(double);
};


#endif // CONSULTOR_H_INCLUDED
