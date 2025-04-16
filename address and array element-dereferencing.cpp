#include<stdio.h>
main()
{
 
   int i,a[5]={1,2,3,5,6};
   for(i=0;i<5;i++)
   {
   	printf("%u\t",(a+i));
   	printf("%u\t",*(a+i));
   }
}

