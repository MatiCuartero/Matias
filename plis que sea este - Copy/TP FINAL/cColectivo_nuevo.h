#pragma once
#include <iostream>
#include <string>
#include "cColectivo.h"
#include "cRamal.h"
using namespace std;
#define N 50 //Cantidad de personas Maxima
#define M 20 //Cantidad de personas Maxima por Parada

class cColectivo_nuevo : public cColectivo
{

protected:
	bool aire;
	bool direccion_electrica;
	cRamal *ramal;
	int CA;
	int CAPMAX;
	/*cPersona**Lista_Personas;*/


public:
	cColectivo_nuevo();
	cColectivo_nuevo(const string _codigo, bool _estado, cRamal * ramal,bool _aire,bool _direccion);
	void Abrir_Puerta();
	void Asignar_Nuevo_Ramal();
	int Bajar_Personas();
	double Cobrar_Boleto(string l);
	void SistemaGPS();
	void Subir_Personas();
	bool Verificar_Capacidad();
	void imprimir_info();
	void set_CAPMAX(int capacidad);
	/*void set_CAPMAX(int capacidad);*/
	int get_CAPMAX();
	string get_codigo() const;
	~cColectivo_nuevo();


};
