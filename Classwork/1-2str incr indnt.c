#include<stdio.h>

int main()
{
	int count, inct, max=3;
	
	for(count=1;count<=max;count++)
	{
		if(count==1){
			for(inct=0; inct<=(max-count+1);printf("\t"),inct++);
			printf("*\n");
		}
		for(inct=0; inct<=(max-count);printf("\t"),inct++);
		printf("*");
		for(inct=1; inct<=2*count;printf("\t"),inct++);
		printf("*\n");
	}
	getchar();
}
