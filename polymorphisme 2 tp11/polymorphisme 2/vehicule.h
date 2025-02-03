#pragma once
#include <iostream>
using namespace std;
class vehicule
{
protected:
	float m_prix;
public:

	vehicule(float);
	virtual void afficher()=0;
};
class voiture : public vehicule {
private:
	int m_portes;
public:
	voiture(float, int);
	void afficher()override;
};
class moto :public vehicule {
private:
	float m_vitesse;
public:
	moto(float, float);
	void afficher()override;
};

