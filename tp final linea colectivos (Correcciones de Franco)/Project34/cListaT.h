#pragma once
#define NMAX 20

#include <string>

using namespace std;
template<class T>
class cListaT
{
protected:
	T **vector;
	unsigned int CA, TAM;


	void Redimensionalizar();
public:
	cListaT(unsigned int TAM = NMAX);
	~cListaT();

	//Operator+ Agrega items a la lista.
	bool operator +(T *item);//throw new exception
	bool AgregarItemOrdenado(const T *item);

	//Operator-- Quita elementos de la la lista segun su codigo.
	T* operator--(int clave);//try cath
	T* Quitar(const T *item);
	T* QuitarenPos(unsigned int pos);

	//Operator- Elimina elementos de la lista.
	void operator-(int clave);
	void Eliminar(const T *item);
	void Eliminar(unsigned int pos);

	void Listar();
	T* operator[](int pos);//throw new exception
	//T* BuscarItem(int clave);
	T* getItem(unsigned int pos);

	unsigned int getItemPos(int clave);
	//T* operator[](int pos);//throw new exception

	unsigned int getCA();
	unsigned int getTAM();
};

template<class T>
unsigned int cListaT<T>::getTAM()
{
	return TAM;
}
template<class T>
unsigned int cListaT<T>::getCA()
{
	return CA;
}
///////////
template<class T>
void cListaT<T>::Redimensionalizar()
{
}


template<class T>
cListaT<T>::cListaT(unsigned int TAM)
{
	vector = new T*[TAM];
	for (unsigned int i = 0; i < TAM; i++)
	{
		vector[i] = NULL;
	}

	this->TAM = TAM;
	CA = 0;
}

template<class T>
cListaT<T>::~cListaT()
{
	if (vector != NULL)
	{
		for (unsigned int i = 0; i < CA; i++)
		{
			if (vector[i] != NULL)
				delete vector[i];
		}
		delete[] vector;
	}
}

template<class T>
void cListaT<T>::Listar()
{

	for (unsigned int i = 0; i < CA; i++)
	{
		vector[i]->Imprimir();// imprimir
	}
}

template<class T>
bool cListaT<T>::operator+(T * item)
{
	try
	{
		T *i_f = BuscarItem(item->getclave());
		if (i_f != NULL)
			throw i_f;
			//new exception("Ya se encuentra en la lista");
	}
	catch (T *e)
		cout << "Ya se encuentra en la lista." << endl;

	if (CA < TAM)
		vector[CA++] = item;
	else throw new exception("No hay tamanio suficiente para agregar el item");;
	return true;
}
template<class T>

bool cListaT<T>::AgregarItemOrdenado(const T * item)
{
	/*for (unsigned int i = 0; i < CA; i++)
	{
	if (vector[i]->getclave() == clave)
	return vector[i];
	}
	*/
	return false;
}
template<class T>
T* cListaT<T>::operator--(int clave) {

	try
	{
		unsigned int pos = getItemPos(clave);
		if (pos >= CA)
			throw pos;
	}
	catch (unsigned int g)
		cout << "No se ha podido quitar el item." << endl;

	return QuitarenPos(pos);
}
template<class T>
T* cListaT<T>::Quitar(const T *item) {
	unsigned int pos = getItemPos(item->getclave());
	if (pos >= CA)return NULL;
	return QuitarenPos(pos);
}
template<class T>
T* cListaT<T>::QuitarenPos(unsigned int pos) {

	if (pos >= CA)throw new exception("Posicion invalida");

	T *aux = vector[pos];

	for (unsigned int i = 0; i < CA - 1; i++)
	{
		vector[i] = vector[i + 1];
	}

	vector[CA - 1] = NULL;
	CA--;
	return aux;
}


template<class T>
void cListaT<T>::operator-(int clave) {

	unsigned int pos = getItemPos(clave);

	if (pos < CA)
		Eliminar(pos);
	//sino algo

}
template<class T>
void cListaT<T>::Eliminar(const T *item) {

	Eliminar(item->getclave());
}
template<class T>
void cListaT<T>::Eliminar(unsigned int pos) {
	if (pos >= CA)return;// o Throw no pude eliminar

	T *dato = QuitarenPos(pos);

	if (dato != NULL)
		delete dato;
	else
	{
		throw new exception("no encontrado");
	}
}

template<class T>
T* cListaT<T>::operator[](int clave)
{
	for (unsigned int i = 0; i < CA; i++)
	{
		if (vector[i]->getclave() == clave)
			return vector[i];
	}
	return NULL;
}

template<class T>
T* cListaT<T>::getItem(unsigned int pos)
{
	if (pos < CA)
		return vector[pos];
	else return NULL;
}
template<class T>
unsigned int cListaT<T>::getItemPos(int clave)
{
	for (unsigned int i = 0; i < CA; i++)
	{
		if (vector[i]->getclave() == clave)
			return i;
	}

	return INT_MAX;
}


