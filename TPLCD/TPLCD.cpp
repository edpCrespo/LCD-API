#include "stdafx.h"
#include "Fase1.h"
#include "Fase2.h"

using namespace std;

int main()
{
	Fase2 pepito;
	pepito.lcdClear();
	cout << "Ingrese su mensaje." << endl;
	char input[MAX_LENGTH+2];
	cin.getline(input, MAX_LENGTH+2);
	const unsigned char * x = (const unsigned char*) input;
	pepito << x;
	Sleep(5000);
	pepito.lcdClear();
	pepito << (const unsigned char*)"DELETED";
	getchar();
	return 0;
}

