
#include "cColectivo.h"

cColectivo::cColectivo()
{
	CA = 0;
	CAPMAX = 60;
	precio = 0;
	ramal = new cRamal();
	Estado = true;

}

cColectivo::cColectivo(const string _codigo, bool _estado, cRamal * ramal): codigo(_codigo)
{
	Estado = _estado;
	this->ramal = ramal;


}

cColectivo::~cColectivo()//hay que agregar el virtual al destructor?
{
	cout << "destruyendo colectivo" << endl;


	sistema->getParada
}



int cColectivo::get_CAPMAX()
{
	return CAPMAX;
}
