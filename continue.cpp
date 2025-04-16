#include<stdio.h>
main()
{
	int i;
	for(i=0;i<10;i++)
	{
		if(i==4)
		{
			printf("exit immediately");
			continue;
		}
		printf("%d\n",i);
	}
}
