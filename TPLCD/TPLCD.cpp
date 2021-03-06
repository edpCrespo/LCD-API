#include "stdafx.h"
#include "Fase1.h"
#include "Fase2.h"

using namespace std;

int main()
{
	Fase2 pepito;
	pepito.lcdClear();	//limpio el display
	cout << "Please write your message." << endl;
	char input[MAX_LENGTH + 2];				//tomo un caracter mas para que devuelva 33 si se exede y poder detectar overflow
	cin.getline(input, MAX_LENGTH + 2);		//recibo mensaje del usuario.
	const unsigned char * x = (const unsigned char*)input;
	pepito << x;
	cout << "Press enter to clear screen." << endl;
	getchar();
	pepito.lcdClear();		//clear screen
	pepito << (const unsigned char*)"DELETED";
	cout << "Press enter to exit." << endl;
	getchar();
	pepito.lcdClear();
	pepito << (const unsigned char*)"See you later,  alligator.";
	Sleep(2000);
	return 0;
}

