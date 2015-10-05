#include<stdio.h>

int main()
{
	int count, inct, max=8, lines=4;
	
	for(count=0;count<=lines-1;count++)
	{
		for(inct=1; inct<=(max/2);inct++)
		{
			if(inct<=((max/2)-count)) printf("*\t");
			else printf("\t");
		}
		
		for(inct=(max/2); inct<=(max);inct++)
		{
			if(inct>=((max/2)+count)) printf("*\t");
			else printf("\t");
		}
		printf("\n");
	}
	getchar();
}
