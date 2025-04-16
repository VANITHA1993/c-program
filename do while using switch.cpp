#include<stdio.h>
main()
{
	int a,b,i=0;
	char n;
	do{ printf("enter a,b");
	scanf("%d%d",&a,&b);
	printf("select + for addition");
	printf("select - for substraction");
	printf("select / for quotient");
	printf("select * for multiplication");
	printf("select % for remainder");
	printf("enter choice");
	scanf(" %c",&n);
	switch(n)
	{
		case '+':
			printf("%d\n",a+b);
			break;
		case '-':
			printf("%d\n",a-b);
			break;
		case '/':
			printf("%d\n",a/b);
			break;
		case '*':
			printf("%d\n",a*b);
			break;
		case '%':
			printf("%d\n",a%b);
			break;
		default:
			printf("wrong choice");
	}
	i++;
	}while(i<6);
}
