#pragma once
#include "Livre.h"

class LIV_ENF : public Livre 
{
	int age_min;
	int age_max;
public:
	LIV_ENF(int, const string&,int,double,int,int );
	double prixttc() const override;
	void afficher() const override;
};

