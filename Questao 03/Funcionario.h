#ifndef FUNCIONARIO_H_INCLUDED
#define FUNCIONARIO_H_INCLUDED

#include <string>

class Funcionario {
	protected:
		std::string nome;
		std::string matricula;
		double salario;
	public:
		Funcionario();
		Funcionario(std::string, std::string, double);
		virtual ~Funcionario();

		std::string getNome();
		std::string getMatricula();
		double getSalario();

		void setNome(std::string);
		void setMatricula(std::string);
		void setSalario(double);
};

#endif // FUNCIONARIO_H_INCLUDED
