#include "vecteur3D.h"

vecteur3D::vecteur3D(float c1, float c2, float c3)
{
	x = c1;
	y = c2;
	z = c3;
}

void vecteur3D::afficher() const
{
	cout << x <<" " << y << " " << z;
}

vecteur3D vecteur3D::operator+(const vecteur3D&v)
{
	return vecteur3D(x=v.x,y=v.y,z=v.z);
}

float vecteur3D::operator*(const vecteur3D& v)
{
	return (x*v.x+y*v.y+z*v.z);
}

bool vecteur3D::operator==(const vecteur3D& v) const
{
	return (x==v.x && y==v.y && z==v.z);
}

bool vecteur3D::operator!=(const vecteur3D& v) const
{
	return !(*this==v);
}

