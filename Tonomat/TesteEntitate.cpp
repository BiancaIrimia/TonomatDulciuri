#include "TesteEntitate.h"
#include <cassert>
#include "Entitate.h"

void teste_Entitate()
{
	Entitate a("ciocolata", 2, 4);
	assert(a.getNume() == "ciocolata");
	assert(a.getCod() == 2);
	assert(a.getPret() == 4);

	Entitate b("bobo", 3, 2);
	assert(b.getNume() == "bobo");
	assert(b.getCod() == 3);
	assert(b.getPret() == 2);

	Entitate c("alune", 5, 4);
	assert(c.getNume() == "alune");
	assert(c.getCod() == 5);
	assert(c.getPret() == 4);
}
