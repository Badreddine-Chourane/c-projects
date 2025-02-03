#include "form.h"
#include <math.h>

cercle::cercle(float r)
{
	rayon = r;
}

float cercle::aire()
{
	return 3.14*pow(rayon,2);
}

rectangle::rectangle(float l, float h)
{
	largeur = l;
	hauteur = h;
}

float rectangle::aire()
{
	return largeur*hauteur;
}
