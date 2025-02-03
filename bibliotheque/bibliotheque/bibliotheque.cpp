#include "Livre.h"

int main() {
    // Création de la bibliothèque
    bibliotheque maBibliotheque;

    // Création de quelques livres
    Livre livre1("1984", "George Orwell", "1949", "123456789");
    Livre livre2("Le Petit Prince", "Antoine de Saint-Exupéry", "1943", "987654321");
    Livre livre3("Harry Potter à l'école des sorciers", "J.K. Rowling", "1997", "456123789");

    // Ajout des livres à la bibliothèque
    maBibliotheque.ajouterLivre(livre1);
    maBibliotheque.ajouterLivre(livre2);
    maBibliotheque.ajouterLivre(livre3);

    // Affichage des livres
    cout << "Liste des livres dans la bibliothèque :" << endl;
    maBibliotheque.AfficherLivre();

    // Suppression d'un livre par son ISBN
    cout << "\nSuppression du livre avec ISBN 987654321..." << endl;
    maBibliotheque.supprimerLivreParISBN("987654321");

    // Affichage des livres après suppression
    cout << "\nListe des livres après suppression :" << endl;
    maBibliotheque.AfficherLivre();

    return 0;
}
