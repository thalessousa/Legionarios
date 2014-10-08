#include "Legionarios.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <vector>
#include <cstring>
using namespace std;
using namespace legionarios;

int main(int argc, char **argv)
{
	int opcao=0;
	Legionarios leg;   
		while(opcao==0)
{
           switch(Legionarios::menu())
{
			  case 1:
			  leg.batalhar();
			  break;
			  case 2:
			  leg.info();
			  break;
}
}
}
