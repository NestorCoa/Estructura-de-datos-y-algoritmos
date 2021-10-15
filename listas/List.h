#ifndef LIST_H
#define LIST_H



 template<class T>
 class List
 {
     private:
          Nodo<T> * m_pHead;
          int cont;
     public:
        List()
        {
           m_pHead = 0;
           int cont=0;
        }

       void push_front(T d)
       {
            if(!m_pHead)
            {
                m_pHead = new Nodo<T>(d);
                m_pHead->m_pSig = m_pHead;
                cont=1;
            }
            else
            {
                 Nodo<T> * tmp1 = m_pHead;
                 Nodo<T> * tmp =  new Nodo<T>(d);
                 tmp->m_pSig = m_pHead;
                 m_pHead = tmp;
                 tmp = tmp->m_pSig;

                 while(tmp->m_pSig != tmp1)
                  tmp=tmp->m_pSig;
                 tmp->m_pSig = m_pHead;
                 cont++;


            }
       }
       void push_back(T d)
       {
           if(!m_pHead)
           {
               m_pHead = new Nodo<T>(d);
               m_pHead->m_pSig = m_pHead;
               cont=1;
           }
           else
           {
              Nodo<T> * tmp = m_pHead;
              while(tmp->m_pSig != m_pHead)
                  tmp=tmp->m_pSig;
              tmp->m_pSig = new Nodo<T>(d);
              tmp=tmp->m_pSig;
              tmp->m_pSig = m_pHead;
              cont++;
           }
       }
       void insert_position(T d, int pos)
       {
        if(pos > cont) push_back(d);
        else if(pos == 1)
        {
            push_front(d);
        }
        else
        {
            Nodo<T> *tmp = m_pHead;

            int i = 2;
            while(i < pos)
            {
                tmp = tmp->m_pSig;
                i++;
            }
            Nodo<T> *tmp1= tmp->m_pSig;
            tmp->m_pSig = new Nodo<T>(d);
            tmp=tmp->m_pSig;
            tmp->m_pSig = tmp1;
            cont++;
        }

       }


       void insert_alfabeticamente( T d)
       {

           if(!m_pHead)
           {
               m_pHead = new Nodo<T>(d);
               m_pHead->m_pSig = m_pHead;
               cont=1;
           }
           else
           {
               int posi = 1;
               Nodo<T> *tmp = m_pHead;
               if( tmp->m_pSig == m_pHead and d > tmp->m_Dato) insert_position(d,2);
               else
               {
                while(tmp->m_pSig != m_pHead)
                {
                   if(d > tmp->m_Dato)
                   {
                       posi++;
                   }


                   tmp = tmp->m_pSig;
                }
                cout<<"el valor de pos = "<<posi<<endl;
                if(posi == cont) push_back(d);
                else{
                    insert_position(d, posi);
                }

               }
           }


       }


       bool find(T d)
       {
           Nodo<T> * tmp = m_pHead;
           while(tmp)
           {
                    if(tmp->m_Dato == d) return true;
                    tmp = tmp->m_pSig;

           }
            return false;

       }
       void print()
       {
           Nodo<T> * tmp = m_pHead;

           /*for( ;tmp ; tmp = tmp->m_pSig)
                    cout<<tmp->m_Dato<<"->";*/
           for(int i = 0; i< cont+1; ++i)
           {
               cout<<tmp->m_Dato<<"->";
               tmp = tmp->m_pSig;
           }
           cout<<endl;

       }

       // print recursivo
       //  add recursivo(siempre al final)
       // find recursivo
      // delete_front
      //  delete_back
      // L1.Union(L2)  L1={1,2,3}  L2={3,1,5}   L1.Union(L2) ={1,2,3,5}
      // L2.Inter(L2)

 };

#endif // LIST_H
