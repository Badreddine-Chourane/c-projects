#pragma once
#include "Employee.h"
//class Employee;
class Date_Embauche
{
private:
	int jour, mois, annees;

public:
	friend  class Employee;
	Date_Embauche(int jour=0, int mois=0, int annees=0);
	friend istream& operator>>(istream&, Date_Embauche&);
	friend ostream& operator<<(ostream&, Date_Embauche&);
	
	

};

