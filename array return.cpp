#include <iostream.h>

main()
{ 
	int *array;
	int *maker (void);
	
	array = maker();
	
	return 0;
}

static int maker(void)
{
	static int array[30];
	for (int i=0;i<30;i++)
	{
		array[i]=i+20*i-34;
	}
	
return array;
}
