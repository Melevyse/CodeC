#pragma once
#include "iostream"
#include "Windows.h"
#include "string"
#include "fstream"
#include <vector>

using namespace std;

class Multi
{
private:
	bool *massiv;
	int size;
public:
	Multi();
	Multi(int nSize);
	void set_size(int number);
	void set_massiv(bool *lineSimbol);
	int get_size();
	bool *get_massiv();
	bool get_elMassiv(int ind);
	void set_elMassiv(int ind, bool logica);
	void upSizeM(int up);
	void searchLastElement();
	void addElement(int nElem);
	void delElement(int nElem);
	bool searchElement(int nElem);
	Multi operationX (Multi m1, Multi m2);
	Multi operationPlus (Multi m1, Multi m2);
	Multi operationMinus (Multi m1, Multi m2);
	bool operator == (Multi &m2);
};

template<class T>
T* upSize(T *mass, int& size, int nSize)
{
	T *nMassiv = new T[nSize];
	for (int i = 0; i < size; i++)
		nMassiv[i] = mass[i];
	delete[] mass;
	size = nSize;
	return nMassiv;
}
