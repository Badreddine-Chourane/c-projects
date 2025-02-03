#include "Date_Embauche.h"

Date_Embauche::Date_Embauche(int jour, int mois, int annees)
{
	this->jour = jour; this->mois = mois; this->annees = annees;
}

istream& operator>>(istream& i, Date_Embauche& d)
{
	i >> d.jour;
	i >> d.mois;
	i >> d.annees;
	return i;
	
}

ostream& operator<<(ostream& o, Date_Embauche& d)
{
	o << d.jour <<"/" << d.mois <<"/" << d.annees;
}
