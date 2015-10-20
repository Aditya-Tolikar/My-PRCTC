#include<iostream>
#include<conio.h>

using namespace std;

int evenCheck(int qvar, int mode = 0);
void printArr1D(int givenArray[], int size);
int readArr1D(int *freeArray, int size);
main()
{
	int *input, *oddthingy, *eventhingy, length;
	cout<<"First of all Tell me just how many numbers do you intend on giving me\t";
	cin>> length;
	input = new int [length];
	oddthingy = new int [length];
	eventhingy = new int [length];
	
	readArr1D(input, length);
	
	int oddcount = 0, evencount = 0;
	for(int count = 0; count<length; count++)
	{
		oddthingy[count]='\0'; eventhingy[count]='\0';
		if (evenCheck(input[count],1)) oddthingy[oddcount++]=input[count];
		else if (evenCheck(input[count])) eventhingy[evencount++]=input[count];
		else cout<<"Something wrong here...\a\n";
	}
	
	cout<<"\nYall the EVEN numbers...\n";
	printArr1D(eventhingy,evencount);
	cout<<"Yall the ODD numbers...\n";
	printArr1D(oddthingy, oddcount);
	cout<<endl;
	
	getch();
}

int evenCheck(int qvar, int mode = 0)
{
	if(qvar%2) return (mode);
	else return (1-mode);
}

void printArr1D(int givenArray[], int size)
{
	for(int i=0; i<size; i++) cout<<givenArray[i]<<"\t";
	cout << endl;
}

int readArr1D(int *freeArray, int size)
{
	for(int i=0; i<size; i++) cin >> freeArray[i];
}
