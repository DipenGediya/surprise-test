#include<stdio.h>

main()
{
    int a,b,c,d;
	
	printf("Enter Value of A = ");
	scanf("%d",&a);
	
	printf("Enter Value of B = ");
	scanf("%d",&b);
	
	printf("Enter Value of C = ");
	scanf("%d",&c);
	
	printf("Enter Value of D = ");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("A is maximum");
			}
			else{
				printf("D is maximum");
			}
		}
		else{
			if(c>d)
			{
				printf("C is maximum");
			}
			else{
				printf("D is maximum");
			}
		}
	}
	else{
		if(b>c)
		{
			if(b>d)
			{
				printf("B is maximum");
			}
			else{
				printf("D is maximum");
			}
		}
		else{
			if(c>d)
			{
				printf("C is maximum");
			}
			else{
				printf("D is maximum");
			}
		}
	}
}
