
//Binary to Decimal 10 bit
//Aditya Tolikar
//ECE-1
//401506003

#include <stdio.h>
#include <math.h>

main()
{
	int bin, dec=0, i=1, divno=10, a[10]={0,0,0,0,0,0,0,0,0,0},ch ;

	//Input	
	printf("Enter binary 10bit \t");
	scanf("%d",&bin);
	printf("Num read= %d\n",bin);
	
	
	ch = (bin%divno);
	a[0]=ch;
	

	//Conversion loop
	for(;i<10;i++)
	{
		ch = (bin%divno);
		//printf ("%d %d %d\n",i, ch, divno); //checking
		divno = pow (10,(i+1));
	//Interm data stored in array		
		a[i] = (((bin%divno)-ch)/(divno/10))*(pow(2,i));
	//	printf ("%d\n",a[i]); //checking

	}

//Creating final answer

	for(i=0;i<10;i++)
	{
		dec = dec + a[i];
	}
	
	printf("%d\n",dec);	


}
		//Signature : AT

//6003_4.c
//Displaying 6003_1.c.
