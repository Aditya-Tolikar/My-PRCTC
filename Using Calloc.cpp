#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
	int *data;
	int size;
	
	cout<<"Size of data\t";cin>>size;
	data = (int *) calloc (size,sizeof(int));
	
	for(int i=0; i<size;i++)
	{
		//cin<<data[i];
		scanf("%d",&data[i]);
		//cin<< rendered unusable with calloc TDM C++
	}
	
	for(int i=0; i<size;i++)
	{
		cout<<data[i]<<"\t";
	}
	
}
