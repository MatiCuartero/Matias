

#include "cColectivo_nuevo.h"

cColectivo_nuevo::cColectivo_nuevo()
{
	aire = true;
	direccion_electrica = true;
	ramal = new cRamal();
}

cColectivo_nuevo::cColectivo_nuevo(const string _codigo, bool _estado, cRamal * ramal,bool _aire,bool _direccion):cColectivo(_codigo,_estado,ramal)
{
	aire =_aire;
	direccion_electrica = _direccion;

}

void cColectivo_nuevo::imprimir_info()
{
	cout << "Soy un colectivo nuevo " << endl;
}

cColectivo_nuevo::~cColectivo_nuevo()
{
	cout << "destruyendo el colectivo nuevo" << endl;
}
