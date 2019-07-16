#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "stdlib.h"
using namespace std;
#define M 20

class cRamal;
class cParada;
template<typename cPersona>
class cListaT;

class cColectivo
{
	//COMENTADO...
protected:

	int CAPMAX;//cap maxima de personas que pueden estar
	int CA;//capacidad actual, cantidad de persona que van a estar en el colectvio
	const string codigo;//Fijarse si ahora los codigos de los colectivos van a ser int en vez de string
	bool Estado;//true si esta andando false si no
	cListaT<class cPersona>*ListaPersona;
	cRamal *ramal;
	cParada *Parada_Actual;
//	cSistema_Rutatlantica *sistema;
	static int contador_codigo;
	int CantidadPersonas;
	int cont_rotura; //cuenta hasta cuando el colectivo avanzo 5 paradas para que se rompa

	//static string contador_codigo;


public:

	//METODOS
	cColectivo();
	cColectivo(const string _codigo,bool _estado, cRamal *ramal);
	void Asignar_Nuevo_Ramal(cRamal *ramal);//CORREGIR.	
	void Bajar_Personas();
	float Cobrar_Boleto();
	void SistemaGPS();
	virtual void Subir_Personas()=0;
	bool Verificar_Capacidad();//verifica que la capacidad actual no sobrepase la capacidad maxima
	virtual void imprimir_info() = 0;//metodo polimorfico
	void Rotura();

	//GETS
	int get_CAPMAX() { return CAPMAX; }
	cParada *getParada_Actual();
	string getCodigo_Colectivo() { return codigo; }
	int get_codigo() { return contador_codigo; }
	int getCantidad_de_Personas() { return CantidadPersonas; } //Devuelvo un contador que guarda la cantidad de personas que se subieron en el colectivo.
	string getRamal(); 


	//int getclave() { return codigo; } // Este método lo agregó Franco, verificar si está bien que devuelva ese código

	virtual ~cColectivo();

};

 
