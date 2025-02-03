#include "etudiant.h"



string etudiant::GetNom() const
{
	return nom;
}

string etudiant::GetPrenom() const
{
	return prenom;
}

unsigned int etudiant::GetCNE() const
{
	return CNE;
}

void etudiant::SetNom(string n)
{
	nom = n;
}

void etudiant::SetPrenom(string p)
{
	prenom = p;

}

void etudiant::SetCNE(unsigned int cne)
{
	CNE = cne;
}

etudiant::etudiant()
{
	nom = "";
	prenom = "";
	CNE = 0;
}

unsigned int employe::GetNumEmployee() const
{
	return numEmploye;
}

unsigned int employe::GetSalaire() const
{
	return salaire;
}

string employe::GetPosteOccupe() const
{
	return posteOccupe;
}

void employe::SetNumEmployee(unsigned int np)
{
	numEmploye = np;
}

void employe::SetSalaire(unsigned int s)
{
	salaire = s;
}

void employe::SetPosteOccupe(string po)
{
	posteOccupe = po;
}

employe::employe()
{
	numEmploye = 0;
	salaire = 0;
	posteOccupe = "";
}

istream& operator>>(istream& is, etudiant& e)
{
	
	cout << "Entrez le Nom : ";
	is >> e.nom;
	cout << "Entrez le Prenom : ";
	is >> e.prenom;
	cout << "Entrez le CNE : ";
	is >> e.CNE;
	return is;
}

ostream& operator<<(ostream& os, etudiant& e)
{
	os << "CNE: " << e.CNE << ", Nom: " << e.nom << ", Prenom: " << e.prenom;
	return os;
}

istream& operator>>(istream& is, employe& emp)
{
	cout << "Entrez le NumEmploye : ";
	is >> emp.numEmploye;
	cout << "Entrez le Salaire : ";
	is >> emp.salaire;
	cout << "Entrez le Poste Occupe : ";
	is >> emp.posteOccupe;
	return is;
}

ostream& operator<<(ostream& os, employe& emp)
{
	os << "NumEmploye: " << emp.numEmploye
		<< ", Salaire: " << emp.salaire
		<< ", PosteOccupe: " << emp.posteOccupe;
	return os;
}

bool operator==(employe& e1, employe&e2)
{
	return e1.salaire==e2.salaire;
}

bool operator!=(employe& e1, employe& e2)
{
	return!(e1 == e2);
}
