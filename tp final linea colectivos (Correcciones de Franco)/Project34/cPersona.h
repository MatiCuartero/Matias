#pragma once
#include <iostream>
#include <string>
#include "cListaT.h"
using namespace std;



class cPersona
{

protected:
	int codigo;
	string parada;
	bool silla_ruedas;
	static int cont_codigo;
	cListaT<class cPersona> *persona;

public:
	cPersona();
	//Llamo al construcotr de personas una vez que pasen los ticks desde la clase sistema con los random.
	cPersona(string parada, bool silla_ruedas);
	string get_Parada();
	void set_Parada(string l);
	string Prioridad_Indicador(bool l);
	static int getCont_Codigo();/*agregar al uml*/
	bool getSilla_ruedas() { return silla_ruedas; }
	~cPersona();
	//agregar al uml 
	int get_contador();

};

//if(paradaactual->getNombre()==ramal->getListaParadas()->getNombre)
{

}
