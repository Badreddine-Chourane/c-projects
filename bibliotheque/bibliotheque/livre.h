#pragma once
#include <iostream>
#include<string>
#include<vector>
using namespace std;
class Livre
{
private:
	string titre, auteur, annee_de_publication, numero_ISBN;

public:
	Livre(string, string, string, string);
	void afficherDetails();
	string getISBN();
};
class bibliotheque
{
private:
	vector <Livre> livre;

public:
	void ajouterLivre(const Livre& l);
	void supprimerLivreParISBN(string isbn);
	void AfficherLivre();

};

