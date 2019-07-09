#pragma once
#include <iostream>
#include <string>
#include "cListaT.h"
using namespace std;



class cPersona
{

protected:
	int codigo;
	string destino;
	bool silla_ruedas;
	static int cont_codigo;
	cListaT<class cPersona> *persona;

public:
	cPersona();
	//agregar al uml 
	//Llamo al construcotr de personas una vez que pasen los ticks desde la clase sistema con los random.
	cPersona(int codigo,string parada, bool silla_ruedas);
	string getDestino() { return destino; }
	int getCodigo() { return codigo; }
	
	string Prioridad_Indicador(bool l);
	static int getCont_Codigo();/*agregar al uml*/
	bool getSilla_ruedas() { return silla_ruedas; }
	~cPersona();
	
};

//if(paradaactual->getNombre()==ramal->getListaParadas()->getNombre)
{

}
