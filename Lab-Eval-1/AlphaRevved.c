//Reverse Alphabetic Representation
//Aditya Tolikar
//ECE-1
//401506003

#include <stdio.h>

main()
{
	int max=4, count, linenum;
	char output = 'A';

	

	for (linenum = 1; linenum <= max; linenum++)
	//First four lines	
	{
		for(count = 1; count<=linenum; count++)
		{
			printf("%c ",(output+(linenum-count)));
		}
		printf("\n");
	}

	for (linenum = max; linenum >= 1; linenum--)
	//Next four lines	
	{
		for(count = 1; count<=linenum; count++)
		{
			printf("%c ",(output+(linenum-count)));
		}
		printf("\n");
	}

}

//Signature : AT
