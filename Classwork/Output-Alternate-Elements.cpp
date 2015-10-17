#include<iostream>
#include<conio.h>

using namespace std;

main()
{
	int *data, size;
	
	cout<<"Enter no. of elements\t";
	cin >> size;
	
	data = new int [size];
	
	cout<<"Enter array elements\t";
	//getch();
	for (int count=0; count < size; count++)
	{
		cin>>data[count];
		//data[count] = count;
	}
	cout<<endl;
	for (int count=0; count < size; count=count+2)
	{
		cout << data[count]<<endl;
	}
	
	getch();
}
