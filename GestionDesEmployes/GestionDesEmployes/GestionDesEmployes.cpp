#include <iostream>
#include "Employee.h"
int main() {
	const int maxEmployees = 2;
	Employee employees[maxEmployees];
	for (int i = 0; i < maxEmployees; ++i) {
		std::cout << "Les détails de l'employé " << i + 1 << " :\n";
		std::cin >> employees[i];
	}
	for (int i = 0; i < maxEmployees; ++i) {
		std::cout << "\nDétails de l'employé " << i + 1 << ":\n" << employees[i]
			<< std::endl;
	}
	if (employees[0] == employees[1]) {
		std::cout << "\nLes deux employés ont le même salaire\n";
	}
	else {
		std::cout << "\nLes deux employés n'ont pas le même salaire\n";
	}
	return 0;
}