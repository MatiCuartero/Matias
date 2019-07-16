#pragma once
#include <string>

using namespace std;
#define N 9

template<typename cParada>
class cListaT;
class cRamal
{
protected: 

	string nombre;
	cListaT<class cParada>*ListaParadas;


public:

	cRamal();
	cRamal(string nombre, cParada *parada1, cParada *parada2, cParada *parada3, cParada *parada4, cParada *parada5);
	string getNombre() { return nombre; }
	cListaT<cParada>* getLista() { return ListaParadas; }
	~cRamal();
};

