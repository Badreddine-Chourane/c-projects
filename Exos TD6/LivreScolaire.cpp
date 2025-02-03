#include "LivreScolaire.h"

void LivreScolaire::afficher() const
{
	Livre::afficher();
	cout << "dicsipline:" << dis << " niveau:" << niv << endl;
}
