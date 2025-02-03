	#include "Livre.h"
	using namespace std;

	Livre::Livre(string t, string au, string ann, string num)
	{
		titre = t;
		auteur = au;
		annee_de_publication = ann;
		numero_ISBN = num;
	}

	void Livre::afficherDetails() {
		cout << "Titre : " << titre << endl
			<< "Auteur : " << auteur << endl
			<< "Annee de publication : " << annee_de_publication << endl
			<< "Numero ISBN : " << numero_ISBN << endl
			<< "--------------------------" << endl;
	}

	string Livre::getISBN()
	{
		return numero_ISBN;
	}

	void bibliotheque::ajouterLivre(const Livre& l) {
		livre.push_back(l);
	}

	void bibliotheque::supprimerLivreParISBN(string isbn)
	{
		for (int i = 0; i < livre.size(); i++) {
			if (livre[i].getISBN() == isbn) {
				livre.erase(livre.begin() + i);
			}
		}
	}

	void bibliotheque::AfficherLivre()
	{
		for (int i = 0; i < livre.size(); i++) {
			livre[i].afficherDetails();
		}

	}
