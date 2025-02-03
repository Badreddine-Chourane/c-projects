#pragma once
class form
{
public:
	virtual float aire()=0;
};



class cercle :public form {
private:
	float rayon;
public:
	cercle(float);
	float aire() override;
};

class rectangle :public form {
private:
	float largeur, hauteur;
public:
	rectangle(float, float);
	float aire() override;
};

