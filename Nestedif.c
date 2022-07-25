#include <stdio.h>

void main()

{
	int a,b,c;
	printf("Enter Value of A = ");
	scanf("%d",&a);
	printf("Enter Value of B = ");
	scanf("%d",&b);
	printf("Enter Value of C = ");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("\nA is Greater");	
		}
		else
		{
			printf("\nC is Greater");
		}
	}
	else
	{
			if(b>c)
		{
			printf("\nB is Greater");
		}
		else
		{
			printf("\nC is greater");
		}	
	}
	
}



	
	
