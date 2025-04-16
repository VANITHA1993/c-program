#include<stdio.h>
float avg_of_two(int x,int y)
{
	
	return (float)(x+y)/2 ;
}
main() 
{
 int x,y;
 float avg;
 printf("enter two numbers");
 scanf("%d%d",&x,&y);
 avg=avg_of_two(x,y);
 printf("%f",avg);
	
}
