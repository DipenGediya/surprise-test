#include<stdio.h>

main()
{
	int n , e_bills,t_bills,sc;
	
	printf("Enter Value = ");
	scanf("%d",&n);
	
	
	if(n<=50)
	{
		e_bills = n*0.50;
	}
	else if(n<=150)
	{
		e_bills = (n-50)*0.75 + 25;
	}
	else if(n<=250)
	{
		e_bills = (n-150)*1.20 +100;
	}
	else {
		e_bills = (n-250)*1.50 + 220;
	}
	printf("Total of e_bills = %d\n",e_bills);
	sc = e_bills *20/100 ;
	printf("Surcharge = %d\n");
	t_bills = e_bills + sc;
	printf("Total bills = %d\n",t_bills);
}
