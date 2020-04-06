#include "Entitate.h"

Entitate::Entitate()
{
	this->nume = "";
	this->pret = 0;
	this->cod = 0;
}

Entitate::Entitate(string nume, int cod, int pret)
{
	this->nume = nume;
	this->cod = cod;
	this->pret = pret;
}

Entitate::Entitate(const Entitate & e)
{
	this->cod = e.cod;
	this->pret = e.pret;
	this->nume = e.nume;
}

int Entitate::getCod()
{
	return this->cod;
}

int Entitate::getPret()
{
	return this->pret;
}

string Entitate::getNume()
{
	return this->nume;
}

void Entitate::setCod(int c)
{
	this->cod = c;
}

void Entitate::setNume(string n)
{
	this->nume = n;

}

void Entitate::setPret(int p)
{
	this->pret = p;
}



bool Entitate::operator==(Entitate & e)
{
	if ((e.pret == this->pret) && (e.cod == this->cod) && (e.nume == this->nume))
		return true;
	return false;
}

ostream& operator<<(ostream &os, const Entitate &e)
{
	os << e.nume <<" "<< e.cod <<" "<< e.pret;
	return os;
}

Entitate::~Entitate()
{

}
