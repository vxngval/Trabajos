#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int num [100][100], filas, col, i, j;
	
	cout<<"Ingrese cunatas filas quiere su matriz:  ";
	cin>>filas;
	cout<<"Ingrese cuantas columnas quieres su matriz:  ";
	cin>>col;
	
	for(i=0;i<filas;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"Ingrese los datos ["<<i<<"]["<<j<<"]:  ";
			cin>>num[i][j];
		}
	}
	
	for(i=0;i<filas;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<num[i][j];
			
		}
		cout<<"\n";
	}
	
	getch();
	
	return 0;
}
