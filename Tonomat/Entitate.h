#pragma once
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;

class Entitate
{

private:
	string nume;
	int pret;
	int cod;
public:
	Entitate();
	Entitate(string nume, int cod, int pret);
	Entitate(const Entitate &e);
	int getCod();
	int getPret();
	string getNume();
	void setCod(int c);
	void setNume(string n);
	void setPret(int p);
	bool operator==(Entitate &e);
	friend ostream& operator<<(ostream &os, const Entitate &e);
	


	~Entitate();
};
