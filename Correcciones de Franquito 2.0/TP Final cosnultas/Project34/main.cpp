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
	sistema->TICK_Estado();

	try
	{
		sistema->agregar_paradas();
	}
	catch (exception i)
	{
		cout << "Error al agregar paradas." << endl;
	}
	
	//sistema->agregar_paradas();
	//sistema->TICK_Estado();
	

	
	///se rompre el colectivo se bajan todas las personas 
	//sigue andando pero no levanta  a las personas
	



	system("pause");

	delete sistema;
	return 0;
}
