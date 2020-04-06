#include "RepoFile.h"
#include <fstream>
#include <ostream>


RepoFile::RepoFile()
{
}

void RepoFile::readRepoFile(string fileName)
{
	int cod, pret;
	char nume[30];
	ifstream f(fileName);
	this->v.clear();
	while (f >> nume >> cod >> pret)
	{
		Entitate z(nume, cod, pret);
		this->v.push_back(z);
	}
	f.close();

}

void RepoFile::printRepoFile(string fileName)
{
	ofstream g(fileName);
	for (int i = 0; i < v.size(); i++)
		g << v[i] << "   ";

}

RepoFile::~RepoFile()
{
}
