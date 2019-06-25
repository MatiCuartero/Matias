
#include "cColectivo.h"

cColectivo::cColectivo()
{
	CA = 0;
	CAPMAX = 60;
	precio = 0;
	ramal = new cRamal();
	Estado = true;
	Parada_Actual = new cParada();
}

cColectivo::cColectivo(const string _codigo, bool _estado, cRamal * ramal): codigo(_codigo)
{
	Estado = _estado;
	this->ramal = ramal;
}

void cColectivo::Asignar_Nuevo_Ramal(cRamal * ramal1, cRamal * ramal2, cRamal * ramal3)
{

}

void cColectivo::setParada_Actual(cRamal *ramal)
{
	for (int i = 0; i < 5; i++)
	{
		if (ramal->getLista[i]->getCodigo() == 1)
		{

		}
	}
	
}

cColectivo::~cColectivo()//hay que agregar el virtual al destructor?
{
	cout << "destruyendo colectivo" << endl;
}
