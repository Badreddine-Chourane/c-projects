#include "LIV_ENF.h"
LIV_ENF::LIV_ENF(int a, const string& b, int c, double d, int e, int f)
	:Livre(a,b,c,d),age_max(e),age_min(f)
{
}

double LIV_ENF::prixttc() const
{
	return Livre :: prixttc()*0.5;
}

void LIV_ENF::afficher() const
{
	Livre::afficher();
	cout << ",Age min:" << age_min << ", age max :" << age_max << endl;

}
