#pragma once
#include <iostream>
#include <string>
using namespace std;



class cPersona
{

protected:
	string codigo;
	string parada;
	bool silla_ruedas;


public:
	cPersona();
	//Llamo al construcotr de personas una vez que pasen los ticks desde la clase sistema con los random.
	cPersona(int codigo, string parada, bool silla_ruedas);
	string get_Parada();
	void set_Parada(string l);
	string Prioridad_Indicador(bool l);
	
	~cPersona();


};

