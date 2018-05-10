#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"

using namespace std;

int main(){
	Funcionario f1("Carlos", "12345", 3000.0);
	Consultor c1("Francisco", "12356", 3000.0);
	Funcionario f2("Lucas", "12345", 3000.0);

	cout<< "Salario Carlos: " << f1.getSalario() << endl;
	cout<< "Salario Francisco: " << f2.getSalario() << endl;
	cout<< "Salario Lucas(Default): " << c1.getSalario() << endl;
	cout<< "Salario lucas(20%%): " << c1.getSalario(0.2) << endl;
}
