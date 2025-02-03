#include "vehicule.h"
#include <iostream>

int main()
{
	vehicule* v = new voiture(100000, 4);
	vehicule* m = new moto(50000, 190);
	v->afficher();
	m->afficher();
}
