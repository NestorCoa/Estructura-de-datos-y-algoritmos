#ifndef FIBO_H
#define FIBO_H
#include "nodo.h"
#include <fstream>
#include <vector>
#include <iterator>

template<class T>
class fibonacci{
public:
	std::list<nodo<T>*> root;
	nodo<T> *min;
	int _size;
public:
	fibonacci(){
		_size=0;
	};
	int size(){ return _size;};
	T getmin(){ return min->date;}
	void insert(T d);
	void deletemin();
	void actualizar();
	void merge(std::vector<nodo<T>*> &v,nodo<T> *p);
	
	nodo<T>* _union(nodo<T> *p,nodo<T> *q);
	void actualizarmin();
	void remove(T d);
	bool find(T d,auto &p);
	bool findroot(T d,std::list<nodo<T>*> &son,nodo<T> **&p);
	void decresekey(nodo<T> **p);	
	void print();
	void print(std::list<nodo<T>*> son,int cont,std::ofstream &f);
};

#endif
