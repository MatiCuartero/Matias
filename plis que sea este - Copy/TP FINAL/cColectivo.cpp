
#include "cColectivo.h"

cColectivo::cColectivo()
{
	CA = 0;
	CAPMAX = 60;
	precio = 0;
	ramal = new cRamal();
	Estado = true;
	Parada_Actual = new cParada();
	/*Lista_Personas = new cPersona(); */
}

cColectivo::cColectivo(const string _codigo, bool _estado, cRamal * ramal): codigo(_codigo)
{
	Estado = _estado;
	this->ramal = ramal;
}

void cColectivo::Asignar_Nuevo_Ramal(cRamal * ramal1, cRamal * ramal2, cRamal * ramal3)
{

}

void cColectivo::Bajar_Personas()
{//primero antes de subir bajan los pasajeros que esten en la parada en la que deban bajar
	//debo eliminarlas del colectivo
	



}

void cColectivo::SistemaGPS(cRamal *ramal)
{
	//tengo que comparar segun que ramal tenga(1, 2, 3) y hacer que este en la primer parada de ese ramal y actualizarlo cada 5 min.

	clock_t comienzo;
	double duracion;
	double tiempoEspera;

	cout << "Ingrese el tiempo que desea esperar: ";
	cin >> tiempoEspera;
	comienzo = clock();
	duracion = (clock() - comienzo) / (double)CLOCKS_PER_SEC;

	while (tiempoEspera > duracion) {
		duracion = (clock() - comienzo) / (double)CLOCKS_PER_SEC;
	}



}

/*void cColectivo::setParada_Actual(cRamal *ramal)
{
	for (int i = 0; i < 5; i++)
	{
		if (ramal->getLista[i]->getCodigo() == 1)
		{

		}
	}
	
}*/



bool cColectivo::Verificar_Capacidad()
{

	if (CA < CAPMAX)
	
		return true;

	else
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

