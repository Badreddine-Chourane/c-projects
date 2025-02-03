//---------------Employee.h---------
#pragma once
#include <iostream>
#include <string>
class Date_Embauche {
private:
	int jour;
	int mois;
	int annees;
public:
	Date_Embauche();
	Date_Embauche(int, int, int);
	Date_Embauche(const Date_Embauche&);
	friend std::istream& operator>>(std::istream&, Date_Embauche&);
	friend std::ostream& operator<<(std::ostream&, const Date_Embauche&);
	friend class Employee;
};
class Employee {
private:
	int code;
	std::string nom;
	float nb_heures;
	float taux_remuneration;
	Date_Embauche date_embauche;
public:
	Employee();
	Employee(int, const std::string&, float, float, const Date_Embauche&);
	Employee(const Employee& other);
	int getCode() const;
	std::string getNom() const;
	float getNb_heures() const;
	float getTaux_remuneration() const;
	Date_Embauche getDate_embauche() const;
	float Calculer_salaire() const;
	friend std::istream& operator>>(std::istream&, Employee&);
	friend std::ostream& operator<<(std::ostream&, const Employee&);
	friend bool operator==(const Employee&, const Employee&);
	friend bool operator!=(const Employee&, const Employee&);
};

class Vendeur :public Employee {
	float montant_ventes;
	float pourcentage;
public:
	Vendeur();
	Vendeur(int, const std::string&, float, float, const Date_Embauche&, float, float);
	Vendeur(const Vendeur& v);
	float Calculer_Salaire();
	friend std::istream& operator>>(std::istream&, Vendeur&);
	friend std::ostream& operator<<(std::ostream&, const Vendeur&);

};