#pragma once
#include <iostream>
#include <string>
using namespace std;


class cPersona
{

protected:
	int codigo;
	string destino;
	bool silla_ruedas;
	static int cont_codigo;
	//cListaT<class cPersona> *persona;

public:

	cPersona();
	//agregar al uml 
	cPersona(int codigo = NULL, string destino = "", bool silla_ruedas = NULL);
	string getDestino() { return destino; }
	int getCodigo() { return codigo; }
	static int getCont_Codigo();/*agregar al uml*/
	bool getSilla_ruedas() { return silla_ruedas; }
	~cPersona();
	int getclave() { return codigo; } // Este m�todo lo agreg� Franco, verificar si est� bien que devuelva ese c�digo

};

//if(paradaactual->getNombre()==ramal->getListaParadas()->getNombre)

