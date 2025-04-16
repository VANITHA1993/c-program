#include<stdio.h>
main()
{
	int a,b,i;
	char n;
	do{
		printf("enter a,b");
		scanf("%d%d",&a,&b);
		printf("select + for addition\n");
		printf("select - for sub\n");
		printf("select / for quotient\n");
		printf("select * for mult\n");
		printf("select % for remainder");
		printf("enter choicce");
		scanf(" %c",&n);
		switch(n)
		{
			case'+':
				printf("%d\n,a+b");
				break;
			case'-':
				printf("%d\n,a-b");
				break;
			case'/':
				printf("%d\n,a/b");
				break;
			case'*':
				printf("%d\n",a*b);
				break;
			case'%':
				printf("%d\n,a%b");
			break;
			default:
				printf("wrong choice\n");
		}
		i++;
	}while(i<6);
}

