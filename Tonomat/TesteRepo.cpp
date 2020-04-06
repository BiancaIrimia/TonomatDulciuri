#pragma once
#include <cassert>
#include "Repo.h"
#include "TesteRepo.h"

void teste_Repo()
{
	Repo<Entitate> r;
	Entitate e1("ciocolata", 2, 3);
	Entitate e2("bomboane", 1, 7);
	Entitate e3("acadea", 4, 1);

	r.addElem(e1);
	r.addElem(e2);
	r.deleteElem(0);
	r.addElem(e3);
	assert(r.getElem(0) == e2);

}
