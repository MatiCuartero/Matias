
#include "cColectivo.h"

cColectivo::cColectivo()
{
	CA = 0;
	CAPMAX = 60;
	precio = 0;
	ramal = new cRamal();
	Estado = true;
	Parada_Actual = new cParada();
	*Lista_Personas = new cPersona()/
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

int cColectivo::Subir_Personas()
{





}


bool cColectivo::Verificar_Capacidad()
{

	if (CA < CAPMAX)
	{


	


	}


	else

	 throw new exception "NO HAY LUGAR PARA SUBIR MAS PERSONAS";
		return false;


}
cColectivo::~cColectivo()//hay que agregar el virtual al destructor?
{
	cout << "destruyendo colectivo" << endl;
}



int cColectivo::get_CAPMAX()
{
	return CAPMAX;
}

///SOLO USAR EL COUT PARA SOBRECARGA
//CONST T   (CONST INT Y)

