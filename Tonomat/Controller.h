#pragma once
#include "RepoFile.h"

class Controller
{
private:
	RepoFile e;

public:
	void rfile(string filename);
	Repo <Entitate> getRepo();
	int validareBancnota(int s, Entitate e1);
	void rest(int s, Entitate e1, int& nrMon10, int& nrMon50);

};
