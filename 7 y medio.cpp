#include"iostream"
#include"string"
#include "cstdlib"
#include"ctime"
#include"stdio.h"
#include"stdlib.h"

using namespace std;

int main()
{
	srand(time(NULL));

	string fhf = "fkfk";
	int jugador = 0;
	int maquina = 0;
	int turno = 0;
	string respuesta = "fgdhs";
	int carta;
	int turnomaquina = 0;
	string respuestita = "fhdhdj";
	int pfj = 0;

	while (turno == 0)
	{
		carta = rand() % (12) +1;


		if (jugador < 21)
		{
			cout << "Quieres carta\n";
			cin >> respuesta;
		}

		else if ((respuesta != "Si") || (respuesta != "si") || (respuesta != "no") || (respuesta != "No")&&(jugador<=21)||(respuesta!="me planto"))
		{

			cout << "Quieres carta\n";
			cin >> respuesta;

		}

		if ((respuesta == "si") || (respuesta == "Si"))
		{
			jugador = jugador+carta;
			cout << "Te ha salido la carta " << carta;
			cout << "\nEl total que tienes es " << jugador<<"\n\n";
		}

		else if ((respuesta == "No") || (respuesta == "no")||(respuesta=="me planto"))
		{
			cout << "\nTienes " << jugador;
			pfj = jugador;
			turno = +57;
		}

		if (jugador > 21)
		{
			cout << "Has perdido :(";
			turno = +78;
			turnomaquina = +69;
		}

		/*else if (jugador == 21)
		{
			cout << "Te plantas con 21";
			pfj == jugador;
			turno = +67;
		}*/

	}

	while (turnomaquina == 0)
	{
		carta = rand() % (12) + 1;

		if (maquina<21)
		{
			maquina = maquina + carta;
			cout << "\n\nA la banca le ha tocado la carta " << carta;
			cout << "\nLa banca tiene " << maquina<<"\n\n";
			system("PAUSE");
		}

		if (maquina > 21)
		{
			cout << "\nHas ganado, la banca se ha pasado";
			turnomaquina = +45;
		}

		if ((maquina == 21) && (jugador == 21))
		{
			cout << "Empate";
			turnomaquina = +46;
		}

		if ((maquina > pfj)&&(maquina<=21))
		{
			cout<<"\n\nLa banca se planta\n";
			cout << "Has perdido\n\n\n\n\n\n"<<"";
			turnomaquina = +57;
		}

	}
	
}