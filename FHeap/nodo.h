#ifndef NODO_H
#define NODO_H
#include<list>

template<class T>
class nodo{
public:
	T date;
	int grade;
	nodo<T> *father;
	std::list<nodo<T>*> m_son;
public:
	nodo(){
		father=nullptr;
	}
	nodo(T d){
		date=d;
		father=0;
		grade=0;
	}
};

#endif
