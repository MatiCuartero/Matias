#pragma once
#include <iostream>
#include <string>
#define N 9
#define M 20
using namespace std;

class cPersona;
template<typename cPersona>
class cListaT;

////////TENEMOS QUE CREAR UNA LISTA DE PERSONAS Y AGREGAR PARADAS 
class cParada

{
protected:

	int codigo_identificativo;
	const string nombre;
	string direccion;
	cListaT<class cPersona> *ListaPersonas;


public:

	cParada();
	//cParada(const cParada &nombre);
	cParada(int _cod, string _dir, string _nom);
	int getCodigo() { return codigo_identificativo; }
	int getclave() { return codigo_identificativo; } // Este método lo agregó Franco, verificar si está bien que devuelva ese código
	string getNombre() { return nombre; }
	void Llenar_Listas(cPersona *persona);
	cListaT<class cPersona> *getListaPersonas() { return ListaPersonas; }
	~cParada();
};

