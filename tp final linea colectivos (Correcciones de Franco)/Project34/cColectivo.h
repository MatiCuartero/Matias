#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "cPersona.h"
#include "cListaT.h"
#include "cRamal.h"
using namespace std;
#define M 20



class cColectivo
{

protected:

	int CAPMAX;//cap maxima de personas que pueden estar
	int CA;//capacidad actual, cantidad de persona que van a estar en el colectvio
	static int contador_codigo;
	const int codigo;
	bool Estado;//true si esta andando false si no
	cListaT<cPersona>*ListaPersona;
	/*double precio;*/
	cRamal *ramal;
	cParada *Parada_Actual;
	cSistema_Rutatlantica*sistema;


public:
	cColectivo();
	cColectivo(const int codigo,bool _estado, cRamal *ramal);
	void Asignar_Nuevo_Ramal(cRamal *ramal1, cRamal *ramal2, cRamal *ramal3);
	void Bajar_Personas();
	double Cobrar_Boleto();
	void SistemaGPS();
	virtual void Subir_Personas()=0;
	bool Verificar_Capacidad();//verifica que la capacidad actual no sobrepase la capacidad maxima
	//virtual void Abrir_Puerta()=0;//abrir puerta va a ser un metodo polimorfico que se redefine en las clases hijas dependiendo del colectivo
	//suben o no las personas con sillas de ruedas
	int get_CAPMAX();
	cParada* getParada_Actual() { return Parada_Actual; }
	int get_codigo() { return contador_codigo; }
	virtual void imprimir_info() = 0;//metodo polimorfico
	void Rotura();
	virtual ~cColectivo();

};

 
