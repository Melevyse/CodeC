#include "Multitude.h"

Multi::Multi()
{
	size = 0;
	massiv = new bool[0];
}

Multi::Multi(int nSize)
{
	size = nSize;
	massiv = new bool[nSize];
	for (int index = 0; index < size; index++)
		massiv[index] = false;
}

void Multi::set_size(int number)
{
	size = number;
}

void Multi::set_massiv(bool * lineSimbol)
{
	delete[] massiv;
	massiv = lineSimbol;
}

int Multi::get_size()
{
	return size;
}

bool * Multi::get_massiv()
{
	return massiv;
}

bool Multi::get_elMassiv(int ind)
{
	return massiv[ind];
}

void Multi::set_elMassiv(int ind, bool logica)
{
	massiv[ind] = logica;
}

void Multi::upSizeM(int up)
{
	bool *nMassiv = new bool[up];
	for (int i = 0; i < size; i++)
		nMassiv[i] = massiv[i];
	delete[] massiv;
	size = up;
	massiv = nMassiv;
}

void Multi::searchLastElement()
{
	int nSize = 0;
	for (int index = 0; index < size; index++)
	{
		if (massiv[index] == true) nSize = index;
	}
	if (nSize != 0)
	{
		bool *nMassiv = new bool[nSize];
		for (int i = 0; i < nSize + 1; i++)
			nMassiv[i] = massiv[i];
		delete[] massiv;
		massiv = nMassiv;
		size = nSize;
	}
}

void Multi::addElement(int nElem)
{
	if (size - 1 < nElem)
	{
		int i = size;
		massiv = upSize(massiv, size, nElem + 1);
		size = nElem + 1;
		for (; i < nElem + 1; i++)
			massiv[i] = false;
	}
	massiv[nElem] = true;
}

void Multi::delElement(int nElem)
{
	massiv[nElem] = false;
	searchLastElement();
}

bool Multi::searchElement(int nElem)
{
	if (size - 1 >= nElem)
		return massiv[nElem];
	else return false;
}

Multi Multi::operationX(Multi m1, Multi m2)
{
	if (m1.get_size() < m2.get_size())
		set_size(m2.get_size());
	else set_size(m1.get_size());
	for (int index = 0; index < get_size(); index++)
		if ((m1.get_elMassiv(index) == true) && (m2.get_elMassiv(index) == true))
			set_elMassiv(index, true);
		else set_elMassiv(index, false);
	return *this;
}

Multi Multi::operationPlus(Multi m1, Multi m2)
{
	if (m1.get_size() < m2.get_size())
		set_size(m2.get_size());
	else set_size(m1.get_size());
	for (int index = 0; index < get_size(); index++)
		if ((m1.get_elMassiv(index) == true) || (m2.get_elMassiv(index) == true))
			set_elMassiv(index, true);
		else set_elMassiv(index, false);
	return *this;
}

Multi Multi::operationMinus(Multi m1, Multi m2)
{
	int min;
	if (m1.get_size() < m2.get_size())
	{
		min = m1.get_size();
		set_size(m2.get_size());
	}
	else
	{
		min = m2.get_size();
		set_size(m1.get_size());
	}
	for (int index = 0; index < min; index++)
		if ((m1.get_elMassiv(index) == true) && (m2.get_elMassiv(index) == false))
			set_elMassiv(index, true);
		else set_elMassiv(index, false);
	for (int index = min; index < get_size(); index++)
		if (get_elMassiv(index) == true)
			set_elMassiv(index, true);
		else set_elMassiv(index, false);
	return *this;
}

bool Multi::operator==(Multi & m2)
{
	int sizeq;
	if (get_size() < m2.get_size())
		sizeq = m2.get_size();
	else sizeq = get_size();
	for (int index = 0; index < sizeq; index++)
		if ((get_elMassiv(index) != m2.get_elMassiv(index)))
		{
			return false;
			break;
		}
	return true;
}
