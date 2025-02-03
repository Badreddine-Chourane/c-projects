#include "Livre.h"
float Livre::taxe = 0.2;
double Livre::prixttc() const
{
    return prix*taxe+prix;
}

void Livre::afficher() const
{
    cout << "Numero" << this->ISBN << endl;
    cout << " Titre:"<< this->titre << endl;
    cout << "Nombre en stock" << this->exemplaires << endl;
    cout << "Prix" << this->prix << endl;
}

ostream& operator<<(ostream& os, const Livre& livre)
{
    livre.afficher();
    return os;
}

double montanttotal(const Livre& livre, int exemplaire)
{
    return livre.prixttc() * exemplaire;
}
