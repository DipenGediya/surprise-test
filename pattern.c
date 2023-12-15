#include<stdio.h>

main()
{
	char i,j;
	
	for(i='A';i<='O';i++)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
