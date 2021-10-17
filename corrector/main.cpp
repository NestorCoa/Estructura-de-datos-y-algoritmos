#include <iostream>
#include <list>
#include <string>
#include <fstream>

using namespace std;

void leerArchivo(list<string>);
int edit_distance(sting & s1, string & s2);
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

int edit_distance(sting & s1, string & s2)
{
  size_t len1 s1.size();
  size_t len2 s2.size();
  vector<vector<int>> d(len1+ 1, vector<int>(len2 + 1));
  d[][] = 0;
  for(int i=1;i<len1; i++)
    d[i][0] = i;
  for(int i=1;i<len2; i++)
    d[0][i] = i;
  
  for(int i = 1; i <= len1; ++i)
    for(int j = 1; j <= len2; ++j)
      d[i][j]= min({ d[i-1][j] + 1, d[i][j-1]+1, d[i-1][j-1]+ (s1[i-1] == s2[j-1] ? 0 : 1) });
  return d[len1][len2];

}
