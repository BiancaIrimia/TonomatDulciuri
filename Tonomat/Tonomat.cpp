// Tonomat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "TesteEntitate.h"
#include "TesteRepo.h"
#include "UI.h"

int main()
{
	teste_Entitate();
	teste_Repo();

	UI u;
	u.run();
}

