#pragma once
#include <iostream>
#include <string>
#include "cColectivo.h"
#include "cRamal.h"
#include <ctime>
using namespace std;
#define M 20 //Cantidad de personas maxima por Parada

class cColectivo_nuevo : public cColectivo
{

protected:
	bool aire;
	bool direccion_electrica;
	int CantidadPersonas;
	//cRamal *ramal;
	//int CA;
	//int CAPMAX; Ya lo heredo de la clase cColectivo y vale 60.
	/*cPersona**Lista_Personas;*/


public:
	cColectivo_nuevo();
	cColectivo_nuevo(const string _codigo, bool _estado, cRamal * ramal, bool _aire, bool _direccion);
	/*void Abrir_Puerta();*/
	void Asignar_Nuevo_Ramal(cRamal * ramal1, cRamal * ramal2, cRamal * ramal3);
	void Bajar_Personas();
	float Cobrar_Boleto();
	void SistemaGPS();
	void Subir_Personas();
	bool Verificar_Capacidad();
	void imprimir_info();
	//Devuelvo un contador que guarda la cantidad de personas que se subieron en el colectivo.
	int getCantidad_de_Personas() { return CantidadPersonas; }

	/*void set_CAPMAX(int capacidad);*/
	int get_CAPMAX() { return CAPMAX; }

	//No estoy seguro si se puede devolver asi el const en el .h asi.
	string get_codigo() const { return codigo; }

	friend ostream& operator<<(ostream& o, cColectivo_nuevo& colec);
	virtual ~cColectivo_nuevo();


};
ostream& operator<<(ostream& o, cColectivo_nuevo& colec);