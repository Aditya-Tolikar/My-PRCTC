//To find min and max out of array form data
//Aditya Tolikar
//ECE-1
//401506003

#include<stdio.h>

main()
{
	//declarations
	int dat[]={12,3,5,4,23,6,86,4,23,8};
	int ans, length=10, tag;

	ans = *dat;
//Finding Maximum
	for (tag = 0; tag < length ; tag++)
	{
		if (ans < *(dat+tag)){ans=*(dat+tag);}
	}
	printf("Max = %d\n",ans);
//Finding minimum
	for (tag = 0; tag < length ; tag++)
	{
		if (ans > *(dat+tag)){ans=*(dat+tag);}
	}
	printf("Min = %d\n",ans);

}

//Signature : AT
