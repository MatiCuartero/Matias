#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "stdlib.h"
//#include "cPersona.h"
#include "cListaT.h"
#include "cParada.h"
#include "cRamal.h"
//#include "cSistema_Rutatlantica.h"
using namespace std;
#define M 20

class cRamal;
class cSistema_Rutatlantica;
//class cParada;
class cPersona;

class cColectivo
{
	//COMENTADO...
protected:

	int CAPMAX;//cap maxima de personas que pueden estar
	int CA;//capacidad actual, cantidad de persona que van a estar en el colectvio
	const string codigo;//Fijarse si ahora los codigos de los colectivos van a ser int en vez de string
	bool Estado;//true si esta andando false si no
	cListaT<cPersona>*ListaPersona;
	cRamal *ramal;
	cParada *Parada_Actual;
	cSistema_Rutatlantica *sistema;
	static int contador_codigo;
	int CantidadPersonas;
	int cont_rotura; //cuenta hasta cuando el colectivo avanzo 5 paradas para que se rompa

	//static string contador_codigo;


public:
	cColectivo();
	cColectivo(const string _codigo,bool _estado, cRamal *ramal);
<<<<<<< HEAD
	//void Asignar_Nuevo_Ramal(cRamal *ramal); es lo mismo que el que esta dos metodos abajo, pero solo con *ramal tiraba error
	cColectivo(const int codigo,bool _estado, cRamal *ramal);
	void Asignar_Nuevo_Ramal(cRamal *ramal1, cRamal *ramal2, cRamal *ramal3);
=======
	void Asignar_Nuevo_Ramal(cRamal *ramal);//CORREGIR.	
>>>>>>> 23b67fe552bdbaea02b22b34bffd0c661c5c88d4
	void Bajar_Personas();
	float Cobrar_Boleto();
	void SistemaGPS();
	virtual void Subir_Personas()=0;
	bool Verificar_Capacidad();//verifica que la capacidad actual no sobrepase la capacidad maxima
	//suben o no las personas con sillas de ruedas
	int get_CAPMAX() { return CAPMAX; }
	cParada *getParada_Actual();
	int get_codigo() { return contador_codigo; }
	int getCantidad_de_Personas() { return CantidadPersonas; } //Devuelvo un contador que guarda la cantidad de personas que se subieron en el colectivo.
	virtual void imprimir_info() = 0;//metodo polimorfico
	void Rotura();
	virtual ~cColectivo();

};

 
