#include <stdio.h>
int main() 
{
    int i=1,n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    while (i<=10)
        {
            printf("%d x %d = %d\n",i,n,(i*n));
            i++;
        }
    return 0;
}
