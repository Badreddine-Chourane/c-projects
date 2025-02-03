#pragma once
#include<iostream>
using namespace std;
class etudiant
{
	string nom;
	string prenom;
	unsigned int CNE;
public:
	
	string GetNom()const;
	string GetPrenom()const;
	unsigned int GetCNE()const;

	void SetNom(string);
	void SetPrenom(string);
	void SetCNE(unsigned int);

	etudiant();

	friend istream& operator>>(istream&, etudiant&);
	friend ostream& operator<<(ostream&, etudiant&);
	




};

class employe {
	unsigned int numEmploye;
	unsigned int salaire;
	string posteOccupe;
	
public:
	unsigned int GetNumEmployee()const;
	unsigned int GetSalaire()const;
	string GetPosteOccupe()const;

	void SetNumEmployee(unsigned int);
	void SetSalaire(unsigned int);
	void SetPosteOccupe(string);

	employe();

	friend istream& operator>>(istream&, employe&);
	friend ostream& operator<<(ostream&, employe&);
	friend bool operator==(employe&, employe&);
	friend bool operator!=(employe& , employe&);
};