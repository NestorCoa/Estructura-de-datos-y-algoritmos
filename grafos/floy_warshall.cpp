#include<iostream>
#include<fstream>
#include<vector>

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


using namespace std;


template<class T>
void prinM(vector< vector<T> > v1);


template<class T>
void warshall(T&);

template<class T>
void floy_warshall(T&, T&);



vector< vector< int>> leerMatriz(char *fileName);


int main()
{
	vector<vector< int>> M2 = leerMatriz("grafo.txt");
	vector<vector< int>> MRecorridos = leerMatriz("recorridos.txt");
	printf("LO QUE SE LEE DEL ARCHIVO: \n");
	prinM(M2);

	floy_warshall(M2, MRecorridos);

	//warshall(M2);
	
	prinM(M2);
	cout<<"la matriz de recorridos es "<<endl;
	prinM(MRecorridos);
	return 0;
}


template<class T>
void prinM(vector< vector<T> > v1)
{
	int n = v1.size();
	int m = v1[0].size();
	for(int i= 0; i < n; i++)
	{
		for(int j = 0; j< m; j++)
		{
			printf("%d\t", v1[i][j]);
		}
		cout<<endl;
	}

	cout<<endl;
}


vector< vector< int>> leerMatriz(char *fileName) {
	int filas, cols;
	FILE *fp = fopen(fileName, "r");
	if (fp == NULL) {
		exit(EXIT_FAILURE);
	}
	char linea[80];
	fgets(linea, 79, fp); 
	char *token = strtok(linea, " ");//10 6
	filas = atoi(token);
	token = strtok(NULL, " ");
	cols = atoi(token);
	vector<vector<int>> matriz(filas,vector<int>(cols));//M2(5,VI(3)); matriz(filas, cols);
	for (int i = 0; i < filas; i++) {
		fgets(linea,79, fp);
		token = strtok(linea, " ");
		matriz[i][0] = atoi(token);
		for (int j = 1; j < cols; j++) {
			token = strtok(NULL, " ");
			matriz[i][j] = atoi(token);
		}
	}
	fclose(fp);
	return matriz;
}


void imprimeMatriz(vector< vector< int>> matriz) {
	int filas = matriz.size();
	int cols = matriz[0].size();
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < cols; j++) {
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
}


template<class T>
void floy_warshall(T& matriz0, T& matrizRecorridos)
{
	int n = matriz0.size();
	for(int k = 0; k < n; k++)
	{
		for(int i= 0; i<n; i++)
		{
			for(int j = 0; j<n; j++)
			{
				if(matriz0[i][j] > (matriz0[i][k] + matriz0[k][j]))
				{
					matriz0[i][j] = matriz0[i][k] + matriz0[k][j];
					matrizRecorridos[i][j]=k;
				}
			}
		}
		cout<<"las matrices son"<<endl;
		prinM(matriz0);

	}
}



