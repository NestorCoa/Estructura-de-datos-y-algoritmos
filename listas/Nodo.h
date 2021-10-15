#ifndef NODO_H
#define NODO_H

using namespace std;

 template<class T>
 class Nodo
 {
    public:
        T  m_Dato;
        Nodo<T> * m_pSig;


    public:
       Nodo(T d)
       {
          m_Dato = d;
          m_pSig =0;
       }
 };

#endif // NODO_H
