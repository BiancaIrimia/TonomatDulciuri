#pragma once
#include <vector>
#include "Entitate.h"

template <class T> class Repo
{
protected:
	vector<T> v;
public:
	Repo();
	Repo(const Repo<T> &r);
	void addElem(T &te);
	void deleteElem(int i);
	T getElem(int i);
	T getAll();
	friend ostream & operator<< <>(ostream &os, const Repo<T> r);
	~Repo();
};

template <class T> Repo <T>::Repo()
{
	this->v;
}

template <class T> Repo <T>::Repo(const Repo<T> &r)
{
	this->v = r.v;
}

template <class T > void Repo<T>::addElem(T &te)
{
	this->v.push_back(te);
}

template <class T> void Repo<T>::deleteElem(int i)
{
	this->v.erase(v.begin() + i);
}

template <class T> T Repo<T>::getElem(int i)
{
	return v[i];
}

template <class T> T Repo <T>::getAll()
{
	return this->v;
}

template <class T> ostream & operator<< <>(ostream & os, const Repo<T> r)
{
	for (size_t i = 0; i < r.v.size(); i++)
		os << r.v[i] << endl;
	return os;
}

template <class T> Repo <T>::~Repo()
{
	this->v.clear();
}



