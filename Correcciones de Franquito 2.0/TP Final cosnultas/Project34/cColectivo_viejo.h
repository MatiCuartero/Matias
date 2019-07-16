#pragma once
#include <iostream>
#include <string>
#include "cColectivo.h"
using namespace std;
#define L 35 //Cantidad de personas maxima

class cRamal;
class cParada;
class cColectivo_viejo : public cColectivo
{
	//COMENTADO...
protected:
	
	bool aire;
	bool direccion_hidraulica;


public:
	cColectivo_viejo();
	cColectivo_viejo(const string _codigo, bool _estado, cRamal *ramal, bool _aire, bool _direccion);
	void Asignar_Nuevo_Ramal();
	int Bajar_Personas();
	float Cobrar_Boleto();
	void SistemaGPS();
	void Subir_Personas();
	bool Verificar_Capacidad();
	int get_codigo() { return contador_codigo; }

	///Agrgar al uml///
	void imprimir_info();
	void Rotura();
	int get_CAPMAX();
	~cColectivo_viejo();
	//agregar al uml
};

