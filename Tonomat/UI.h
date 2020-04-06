#pragma once
#include "Controller.h"
class UI
{
private:
	Controller c;
public:
	void mesaje();
	int citireBancnota();
	int citireCod();
	void run();
	void af();
	void afisareBNecoresp();
	void afisareBPutini();
	void afisareRest0();
	void afisareRest(int a, int b);
	void obiecte();
};


