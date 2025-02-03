#pragma once
#include "Livre.h"
class LivreScolaire :
    public Livre
{
    string niv, dis;
public:

    LivreScolaire(int n, const string& t, int s, double p, const string& niv, const string& dis) :Livre(n,t,s,p),dis(dis),niv(niv){}
    void afficher()const override;
};

