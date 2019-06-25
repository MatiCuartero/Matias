#pragma once
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "cColectivo.h"
#include "cListaT.h"
#include "cParada.h"
#include "cPersona.h"
#include "cRamal.h"
#include "cSistema_Rutatlantica.h"

using namespace std;

int main()
{
	
	cSistema_Rutatlantica *sistema = new cSistema_Rutatlantica();
	sistema->agregar_colectivos();

	
	///se rompre el colectivo se bajan todas las personas 
	//sigue andando pero no levanta  a las personas
	
	int opcion;

	/*do
	{
		cout << "--------~~MENU~~--------\n" << endl;
		cout << "1) Estado de Objetos.\n" << endl; //Cambiar los segundos/minutos para listar los estados de todos los objetos de las clases.
		cout << "2) Sistema GPS.\n" << endl;
		cout << "3) Cantidad Total de Pasajeros por Colectivo.\n" << endl;
		cout << "4) Monto Total recaudado por Colectivo.\n" << endl;
		cout << "5) Cantidad Total de pasajeros que viajaron.\n" << endl;
		cout << "6) Monto Total recaudado.\n" << endl;
		cout << "7) Salir.\n" << endl;
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			sistema->TICK_Estado();
			break;

		case 2:
			sistema->TICK_GPS;
			break;

		case 3:
			sistema->cant_Personas;
			break;

		case 4:
			sistema->monto_porColectivo;
			break;

		case 5:
			sistema->total_cant_Personas;
			break;

		case 6:
			sistema->total_cant_monto;
			break;
		}
	} while (opcion != 7);



	system("pause");

	delete sistema;
	return 0;
}
