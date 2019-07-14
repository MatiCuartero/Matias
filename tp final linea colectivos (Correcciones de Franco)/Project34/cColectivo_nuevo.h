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
	//COMENTADO...
protected:

	bool aire;
	bool direccion_electrica;


public:
	cColectivo_nuevo();
	cColectivo_nuevo(const string _codigo, bool _estado, cRamal *ramal, bool _aire, bool _direccion);
	void Asignar_Nuevo_Ramal(cRamal *ramal);
	void Bajar_Personas();
	float Cobrar_Boleto();
	void SistemaGPS();
	void Subir_Personas();
	bool Verificar_Capacidad();
	void imprimir_info();
	void Rotura();

	/*void set_CAPMAX(int capacidad);*/
	int get_CAPMAX() { return CAPMAX; }

	//No estoy seguro si se puede devolver asi el const en el .h asi. MAL
	string get_codigo() const;

	friend ostream& operator<<(ostream& o, cColectivo_nuevo& colec);
	~cColectivo_nuevo();


};
ostream& operator<<(ostream& o, cColectivo_nuevo& colec);