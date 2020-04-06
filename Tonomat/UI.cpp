#include "UI.h"


void UI::mesaje()
{
	cout << c.getRepo() << endl;
	
	

}



int UI::citireBancnota()
{
	int b;
	cout << "Introduceti bancnota: " << endl;
	cin >> b;
	return b;
}

int  UI::citireCod()
{
	int c;
	cout << "Introduceti codul produsului: " << endl;
	cin >> c;
	return c;
}

void UI::run()
{
	obiecte();

	mesaje();
	int x = 0;
	x = citireCod();

	int b = 0, nrMon10 = 0, nrMon50 = 0;
	b = citireBancnota();
	int ok = c.validareBancnota(b, c.getRepo().getElem(x));
	if (ok == 0)
		afisareBNecoresp();
	else if (ok == -1)
		afisareBPutini();
	else if (ok == 1)
		afisareRest0();

	else {
		c.rest(b, c.getRepo().getElem(x), nrMon10, nrMon50);
		if (nrMon10 == -1 || nrMon50 == -1)
			af();
		afisareRest(nrMon10, nrMon50);
		}

}

	


void UI::af()
{
	cout << "Aparatul nu poate da rest" << endl;
}



void UI::afisareBNecoresp()
{
	cout << "Pot fi introduse bancnote de 5 sau 10 lei" << endl;
}
void UI::afisareBPutini()
{
	cout << "Bani insuficienti" << endl;
}
void UI::afisareRest0()
{
	cout << "Rest 0" << endl;
}

void UI::afisareRest(int a, int b)
{
	cout << "Restul este: " << endl;

	if (a)
		cout << a << " monede de 10 bani" << endl;
	if (b)
		cout << b << " monede de 50 de bani" << endl;
}

void UI::obiecte()
{
	cout << "Produs " << "cod  " << "pret"<<endl;
	c.rfile("File.txt");
}


