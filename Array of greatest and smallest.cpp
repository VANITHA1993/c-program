#inclu de<stdio.h>
main()
{
	int a[100],i,n,greatest,smallest;
	printf("enter no of elements");
	scanf("%d",&n);
	printf("enter %d elements",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	smallest=a[0];
	greatest=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<smallest)
		smallest=a[i];
	 {
	   if(a[i]>greatest)
	   greatest=a[i];
}
}
	printf("%d\n",smallest);
	printf("%d\n",greatest);
}


