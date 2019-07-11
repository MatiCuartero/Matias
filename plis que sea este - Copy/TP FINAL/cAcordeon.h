#pragma once
#include <iostream>
#include <string>
#include "cColectivo_nuevo.h"
using namespace std;
#define D 60 //Cantidad de personas maxima

class cAcordeon : public cColectivo_nuevo
{
private:
	int CA;
	int CAPMAX;


public:
	cAcordeon();
	cAcordeon(const string _codigo, bool _estado, cRamal * ramal, bool _aire, bool _direccion);
	/*void Abrir_Puerta();*/
	void Asignar_Nuevo_Ramal();
	int Bajar_Personas();
	double Cobrar_Boleto(string l);
	void SistemaGPS();
	//Fijarse el error sale que supuestamente en la clase padre pasa algo
	void Subir_Personas();
	bool Verificar_Capacidad();
	
	int get_CAPMAX();
	~cAcordeon();

};
