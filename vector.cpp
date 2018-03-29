#include "StdAfx.h"
#include "vector.h"
#include <iostream>

using namespace std;


vector::vector(void)
{
}

vector::~vector(void)
{
}

void vector::charge (int vec[], int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		cin>>vec[i];
	}
}

void vector::show (int vec[], int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		cout<<vec[i]<<endl;
	}
}

void vector::order (int vec[], int n)
{
	int i, aux, aux2, x ;
	for ( i=0 ; i<n-1 ; i++ )
	{
		for( x=i+1 ; x<n ; x++ )
		{
			if( vec[i]>vec[x] )
			{
				aux = vec[x];
				vec[x] = vec[i];
				vec[i] = aux;
			}
		}
	}
}

