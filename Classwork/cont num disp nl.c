#include<stdio.h>

main()
{
	int rows, output,charcnt, chprow;//chprow doubles up as rowcounter
	
	scanf("%d",&rows);
	
	for(chprow=1,output=1;chprow<=rows;chprow++)
	{
		for(charcnt=1; charcnt<=chprow; output++, charcnt++)printf("%d\t",output);
		
		printf("\n");
	}
	fflush(stdin);
	getchar();
}
