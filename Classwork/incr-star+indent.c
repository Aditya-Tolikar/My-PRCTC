#include<stdio.h>

int main()
{
	int count, inct, max=5;
	
	for(count=1;count<=max;count++)
	{
		for(inct=0; inct<=(max-count);printf(" "),inct++);
		for(inct=1; inct<=count;printf("* "),inct++);
		printf("\n");
	}
	getchar();
}
