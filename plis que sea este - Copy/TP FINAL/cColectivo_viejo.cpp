
#include "cColectivo_viejo.h"


cColectivo_viejo::cColectivo_viejo()
{
	ramal = new cRamal();
}

cColectivo_viejo::cColectivo_viejo(const string _codigo, bool _estado, cRamal * ramal, bool _aire, bool _direccion):cColectivo(_codigo,_estado,ramal)
{
	aire = _aire;
	direccion_hidraulica = _direccion;

}







cColectivo_viejo::~cColectivo_viejo()
{
	cout << "destruyendo colectivo viejo" << endl;
}

void cColectivo_viejo::imprimir_info()
{
	cout << "Soy un colectivo viejo" << endl;
	cout << "Si el colectivo tiene aire=1, si no =0" << endl;
	cout << "Aire:" << aire << endl;
	cout << "Direccion hidraulica:" << direccion_hidraulica << endl;

}
