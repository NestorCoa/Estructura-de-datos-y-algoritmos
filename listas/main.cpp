#include <iostream>
#include <string>
#include <fstream>
#include "Nodo.h"
#include "List.h"

using namespace std;

void 

int main()
 {


  /*Nodo<int> A(666);
  cout<<"Dirección del objeto "<<&A<<endl;
  cout<<"Dirección donde vive el dato" << &(A.m_Dato)<<endl;
  cout<<"Dirección donde vide la variable siguiente "<<&(A.m_pSig)<<endl;*/
   /*List<int> A;
   A.push_front(8);
   A.push_front(9);
   A.push_front(7);
   A.push_front(15);
   A.push_front(10);
   A.print();*/
   List<int> A;
   /*A.push_back(34);
   A.push_back(14);
   A.push_back(434);
   A.push_back(634);
   A.push_back(734);
   A.insert_position(254, 6);
   A.insert_position(257, 2);*/
   A.insert_alfabeticamente(5);
   //A.insert_alfabeticamente(7);
   //A.insert_alfabeticamente(2);
   //A.insert_alfabeticamente(3);
   //A.insert_alfabeticamente(1);
   A.insert_alfabeticamente(17);
   A.print();
   A.insert_alfabeticamente(12);
   A.print();
   A.insert_alfabeticamente(-5);
   A.print();
   A.insert_alfabeticamente(13);
   A.print();
   A.insert_alfabeticamente(90);
   A.print();
  /* cout<<A.find(34)<<endl;
   cout<<A.find(14)<<endl;
   cout<<A.find(434)<<endl;
   cout<<A.find(634)<<endl;
   cout<<A.find(734)<<endl;
   cout<<A.find(0)<<endl;
   cout<<A.find(734)<<endl;
   */


   return 1;
 }
