#pragma once
#include <iostream>
#include <string>
#include "cPersona.h"
#include "cListaT.h"
#include "cRamal.h"
using namespace std;
#define M 20

enum Recorrido recorrido {};

class cColectivo
{

protected:
	int CAPMAX;//cap maxima de personas que pueden estar
	int CA;//capacidad actual, cantidad de persona que van a estar en el colectvio
	const string codigo;
	bool Estado;//true si esta andando false si no
	cListaT<class cPersonas>*lista_persona;
	double precio;
	cRamal *ramal;
	cPersona**Lista_Personas;
	cParada *Parada_Actual;
	cSistema_Rutatlantica*sistema;


public:
	cColectivo();
	cColectivo(const string _codigo,bool _estado, cRamal *ramal);
	/*void Abrir_Puerta();*/

	void Asignar_Nuevo_Ramal(cRamal *ramal1, cRamal *ramal2, cRamal *ramal3);
	int Bajar_Personas();
	double Cobrar_Boleto(string l);
	void SistemaGPS();
	virtual void Subir_Personas()=0;
	bool Verificar_Capacidad();
	void Abrir_Puerta();
	virtual ~cColectivo();
	virtual void set_CAPMAX(int capacidad)=0;
	int get_CAPMAX();
	////AGREGAR EN EL UML//////
	virtual void imprimir_info() = 0;//metodo polimorfico


};
///hacer sobrecarga del cout y del cin



//colectivo->lista_personas->agregarItem(paradaActual->lista_personas->QuitarItem(i))
//UTILIZAR ATRIBUTO DE PARADA ACTUAL;
//sistema GPS : HACER EL METODO GPS MATI SEGUN LAS PARADAS QUE HAY EN RAMAL AVANZAR Y TENER EN CUENTA EL CAMBIO DE RAMAL 
