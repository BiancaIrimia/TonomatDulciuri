#pragma once
#include "Repo.h"
class RepoFile : public Repo<Entitate>
{

public:
	RepoFile();

	~RepoFile();

	void readRepoFile(string fileName);
	void printRepoFile(string fileName);
};



