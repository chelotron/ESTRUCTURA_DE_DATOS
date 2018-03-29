#include "stdafx.h"
#include "vector.h"
#include <iostream>

#define MAX 10

using namespace std;

int main()
{
	int v[MAX], n, R;
	vector v1;
	do{
		cout<<"Define vector lenght"<<endl;
		cin>>n;
	} while (n>MAX || n<=0);

	do{
		cout<<"MENU"<<endl;
		cout<<"1.Charge vector"<<endl;
		cout<<"2.Show vector"<<endl;
		cout<<"3.Order vector"<<endl;
		cout<<"4.EXIT"<<endl;
		cout<<"______________"<<endl;
		cout<<"Choose one option"<<endl;
		cin>>R;
		switch(R){
		case 1:
			v1.charge(v,n);
			break;
		case 2:
			v1.show(v,n);
			break;
		case 3:
			v1.order(v,n);
			break;
		default:
			cout<<"!!!!Choose a valid option!!!!"<<endl;
			break;
		}
	} while (R!=4);



    return 0;
}
