#include "vehicule.h"




vehicule::vehicule(float m)
{
	m_prix = m;


}

voiture::voiture(float m, int p) : vehicule(m), m_portes(p)
{
}

void voiture::afficher()
{
	cout << m_portes << "  " << m_prix<<endl;
}

moto::moto(float m, float v):vehicule(m),m_vitesse(v)
{
}

void moto::afficher()
{
	cout << m_vitesse << "   " << m_prix<<endl;
}
