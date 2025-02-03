
#pragma once
#include<iostream>
#include<string>
using namespace std;
class Livre
{
	int ISBN;
	string titre;
	int exemplaires;
	double prix;
	static float taxe;
public:
	Livre(int ISBN,const string& titre , int exemplaires , double prix ):
		ISBN(ISBN), titre(titre),exemplaires(exemplaires),prix(prix){}
	virtual double prixttc() const;
	virtual void afficher() const;
	virtual ~Livre(){}
	
};
ostream& operator << (ostream& os, const Livre& livre);
double montanttotal(const Livre& livre, int exemplaire);

