#pragma once
#include <iostream>
#include <string>
#include "cColectivo_nuevo.h"
using namespace std;
#define D 60 //Cantidad de personas maxima

class cAcordeon : public cColectivo_nuevo
{
private:
	

public:

	cAcordeon();
	cAcordeon(const string _codigo, bool _estado, cRamal * ramal, bool _aire, bool _direccion);
	//cAcordeon(int _codigo, bool _estado, cRamal * ramal, bool _aire, bool _direccion); va o no va?
	void Asignar_Nuevo_Ramal();
	int Bajar_Personas();
	float Cobrar_Boleto();
	void SistemaGPS();
	//Fijarse el error sale que supuestamente en la clase padre pasa algo
	void Subir_Personas();
	bool Verificar_Capacidad();
	int get_CAPMAX();
	void Rotura();
	void imprimir_info();
	int get_codigo() { int contador_codigo = 0; return contador_codigo; }
	~cAcordeon();

};
