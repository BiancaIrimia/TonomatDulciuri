#include "Controller.h"

void Controller::rfile(string filename)
{
	e.readRepoFile(filename);
}

Repo<Entitate> Controller::getRepo()
{
	return this->e;
}



int Controller::validareBancnota(int s, Entitate e1)
{
	if (s != 5 && s != 10)
		return 0;
	if (e1.getPret() > s)
		return -1;
	if (e1.getPret() == s)
		return 1;
	if (e1.getPret() < s)
		return 2;

}


void Controller::rest(int s, Entitate e1, int &nrMon10, int &nrMon50)
{

	int mon10 = 20, mon50 = 30;

	if (e1.getPret() <= s)
	{
		int rest = (s - e1.getPret()) * 100;
		nrMon50 = 0, nrMon10 = 0;
		int r1 = 0;
		while (rest != r1)
		{
			if (mon50)
			{
				r1 += 50;
				nrMon50++;
				mon50--;
			}
			else if (mon10)
			{
				r1 += 10;
				nrMon10++;
				mon10--;
			}
			if (mon10 <= 0 && nrMon10 != 0)
				if (rest != r1)
					nrMon10 = -1;
			if (mon50 <= 0 && nrMon50 != 0)
				if (rest != r1)
					nrMon50 = -1;

		}




	}
}
