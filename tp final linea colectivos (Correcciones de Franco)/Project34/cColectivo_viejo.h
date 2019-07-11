#pragma once
#include <iostream>
#include <string>
#include "cColectivo.h"
#include "cRamal.h"
#include "cListaT.h"
using namespace std;
#define L 35 //Cantidad de personas maxima


class cColectivo_viejo : public cColectivo
{

protected:
	int CA;
	int CAPMAX;
	bool aire;
	bool direccion_hidraulica;


public:
	cColectivo_viejo();
	cColectivo_viejo(const string _codigo, bool _estado, cRamal *ramal, bool _aire, bool _direccion);
	/*void Abrir_Puerta();*/
	void Asignar_Nuevo_Ramal();
	int Bajar_Personas();
	float Cobrar_Boleto();
	void SistemaGPS();
	void Subir_Personas();
	bool Verificar_Capacidad();
<<<<<<< HEAD
	int get_codigo() { return contador_codigo; }
=======
	~cColectivo_viejo();
	///Agrgar al uml///
>>>>>>> b4a0ed8751876c2e13e49383f8718492009903eb
	void imprimir_info();
	void Rotura();
	int get_CAPMAX();
	~cColectivo_viejo();
	//agregar al uml
};

