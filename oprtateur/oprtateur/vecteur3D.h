#pragma once
#include <iostream>
using namespace std;
class vecteur3D
{

	float x, y, z;
public:
	vecteur3D(float c1, float c2, float c3);
	void afficher()const;
	vecteur3D operator+(const vecteur3D&);
	float operator*(const vecteur3D&);
	bool operator==(const vecteur3D&) const;
	bool operator!=(const vecteur3D&) const;
};

