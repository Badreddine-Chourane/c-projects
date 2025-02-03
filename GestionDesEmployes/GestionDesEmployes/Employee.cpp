//--------Employee.cpp------------
#include "Employee.h"
Date_Embauche::Date_Embauche() : jour(0), mois(0), annees(0) {}
Date_Embauche::Date_Embauche(int j, int m, int a) : jour(j), mois(m), annees(a)
{}

Date_Embauche::Date_Embauche(const Date_Embauche & D) : jour(D.jour),
mois(D.mois), annees(D.annees) {}
std::istream& operator>>(std::istream& i, Date_Embauche& D) {
	std::cout << "Entrez le jour : ";
	i >> D.jour;
	std::cout << "Entrez le mois : ";
	i >> D.mois;
	std::cout << "Entrez l'année : ";
	i >> D.annees;
	return i;
}
std::ostream& operator<<(std::ostream& o, const Date_Embauche& Date) {
	o << Date.jour << "/" << Date.mois << "/" << Date.annees;
	return o;
}
Employee::Employee() : code(0), nom(""), nb_heures(0.0), taux_remuneration(0.0)
{}
Employee::Employee(int c, const std::string& n, float heures, float taux, const
	Date_Embauche& date)
	: code(c), nom(n), nb_heures(heures), taux_remuneration(taux),
	date_embauche(date) {}
Employee::Employee(const Employee& E)
	: code(E.code), nom(E.nom), nb_heures(E.nb_heures),
	taux_remuneration(E.taux_remuneration),
	date_embauche(E.date_embauche) {}
int Employee::getCode() const {
	return code;
}
std::string Employee::getNom() const {
	return nom;
}
float Employee::getNb_heures() const {
	return nb_heures;
}
float Employee::getTaux_remuneration() const {
	return taux_remuneration;
}
Date_Embauche Employee::getDate_embauche() const {
	return date_embauche;
}
float Employee::Calculer_salaire() const {
	return nb_heures * taux_remuneration;
}
std::istream& operator>>(std::istream& i, Employee& Emp) {
	std::cout << "Entrez le code : ";
	i >> Emp.code;
	std::cout << "Entrez le nom : ";
	i >> Emp.nom;
	std::cout << "Entrez le nombre d'heures : ";
	i >> Emp.nb_heures;
	std::cout << "Entrez le taux de rémunération : ";
	i >> Emp.taux_remuneration;
	std::cout << "Entrez la date d'embauche :";
	i >> Emp.date_embauche;
	return i;
}
std::ostream& operator<<(std::ostream& o, const Employee& Emp) {
	o << "Code: " << Emp.code << "\nNom: " << Emp.nom << "\nNombre d'heures: " <<
		Emp.nb_heures
		<< "\nTaux de rémunération: " << Emp.taux_remuneration << "Date d'embauche: " << Emp.date_embauche;
		return o;
}
bool operator==(const Employee& E1, const Employee& E2) {
	return E1.Calculer_salaire() == E2.Calculer_salaire();
}
bool operator!=(const Employee& E1, const Employee& E2) {
	return !(E1 == E2);
}

std::istream& operator>>(std::istream& i, Vendeur& v)
{
	i >> static_cast<Employee &>(v);
	i >> v.montant_ventes >> v.pourcentage;
	return i;
	
}

std::ostream& operator<<(std::ostream& o, const Vendeur& v)
{
	o << static_cast< const Employee&>(v);
	o << v.montant_ventes << v.pourcentage;
	return o;
	
}

Vendeur::Vendeur() :Employee(), montant_ventes(0), pourcentage(0)
{
}

Vendeur::Vendeur(int c, const std::string& n, float heures, float taux, const Date_Embauche& date, float mv, float p):Employee(c,n,heures,taux,date),montant_ventes(mv),pourcentage(p)
{
}

Vendeur::Vendeur(const Vendeur& v):Employee(v),montant_ventes(v.montant_ventes),pourcentage(v.pourcentage)
{
}

float Vendeur::Calculer_Salaire()
{
	return Employee::Calculer_salaire() + (montant_ventes * pourcentage);
}
