#include "duree.h"

duree::duree(int h, int m, int s)
{
	heures = h; minutes = m; secondes = s;
}

void duree::afficher() const
{
	cout << heures << " " << minutes << " " << secondes;
}
