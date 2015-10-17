#include <iostream>
#include<conio.h>

using namespace std ;


int *DecrOrderIN(int ssp[] , const int length);
int getMaxIN(int out[], int length, int count, int *changed);
//#define length 5
main()
{

	int *inp;
	int length;
	int *ordered;
	cout<<"Number of elements\t";
	cin>>length;
	inp = new int [length];
	
	cout<<"Array nums\n";

	for (int n=0;n<length;++n)
	{
		//input loop...
		cout<<"\n"<<n<<"th number\t";
		cin>>inp[n];
	}
	
	if(length == 1){cout<<"You know what's gonna happen don't you?\n";}
	else if(length == 2){cout<<"C\'mon man you know better than this.\n";}
	else if (length == 0) cout<<"HeeHeeHeeHee!\n";
	
	ordered = DecrOrderIN(inp , length);
/*	for (int n=0;n<length;++n)
	{
		//output loop...
		cout<<"\t"<<*(ordered+n)<<endl;
	}*/
	
	cout<<"Second highest number =\t"<<ordered[1]<<endl<<"Second Smallest number = \t"<<ordered[length-2]<<endl;
	
getch();
return 0;
}

int *DecrOrderIN(int ssp[],const int len)
{
	static int *out;
	out = new int [len];
	
	//Cloning the array to static one...
	for(int count=0; count < len; ++count) {out[count]=ssp[count];}

	int temp, changed;
	for (int count=0; count < len; ++count)
	{
		temp = out[count];
		out[count] = getMaxIN(out, len, count,&changed);
		//cout << out[count];  //Just to check
		out[changed] = temp;
	}
	//The output is supposed to be returned to a pointer.
	return out;
}

int getMaxIN(int ssp[],int len,int starter,int *tag)
{
	int temp;
	*tag = starter;

	for (temp = ssp[starter]; starter < (len-1) ; ++starter)
	{
		if(temp < ssp[starter+1]) {temp = ssp[starter+1]; *tag = (starter+1);}

		//else continue ;
	}
	//cout << temp <<endl;//Just for checking;
	return temp;
}
