#include <iostream>
#include <list>
#include <string>
#include <fstream>

using namespace std;

void leerArchivo();
int main()
{
  
}

void leerArchivo(list<string> lista1)
{ 
  ifstream archivo("input.txt");
  
  string palabra;
  while(getline(archivo, palabra))
        {
          lista1.push_back(palabra);
  }
}
