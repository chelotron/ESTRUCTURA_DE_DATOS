#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include <string>
#define max 100
using namespace std;
int cargarmatriz(int mat[max][7],nombre vec[max],int n);
int mostrarmatriz(int mat[max][7],nombre vec[max],int n);

	struct nombre {
		string nom;
		int v;
	};
void main()

{
	nombre vec[max];
	int mat[max][7];
	int n;
	cout<<"Coloque la cantidad de alumnos que va a colocar "<<endl;
	cin>>n;
	cargarmatriz(mat[max][7],vec[max],n);
    mostrarmatriz(mat[max][7],vec[max],n);
	
}

int cargarmatriz(int mat[max][7],nombre vec[max],int n)
{
	int i,j,k,f;
	f=2*n;
	for(i=0;i<n;i++)
    for(j=0;j<7;j++)
	{

	cout<<"Coloque la nota de la materia "<<i<<" : "<<endl;
	cin>>mat[i][j];
    }
	for(k=1;k<=f;k++)
	{
		if(k%2!=0)
		{
		cout<<"Coloque el nombre del alumno "<<endl;
		cin>>vec[k];
		}
		else
		{
		cout<<"Coloque el registro del alumno"<<endl;
		cin>>vec[k];
		}
	}

}

int mostrarmatriz(int mat[max][7],nombre vec[max],int n)
{
	int i,j,k,f;
	f=2*n;
    for(k=1;k<=f;k+2)
	{
		cout<<vec[k]<<endl;
		cout<<"   "<<vec[k+1]<<endl;
	for(i=0;i<n;i++)
	{
	for(j=0;j<7;j++)
	{
     cout<<mat[i][j];

	}
	}
	}

}
