#include<stdio.h>

main()
{
	int a[100],b[100],c[200],n,n1,i;
	
	printf("Enter value = ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[n]);
	}
	
	for(i=1;i<n;i++)
	{
		printf("%d",a[n]);
	}
	
		
	printf("\nEnter value = ");
	scanf("%d",&n1);
	
	for(i=1;i<=n1;i++)
	{
		scanf("%d",&a[n1]);
	}
	
	for(i=1;i<n;i++)
	{
		printf("%d",a[n1]);
	}

}
