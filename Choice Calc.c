#include <stdio.h>

void main()
{
	int n1,n2,choice;
	printf("\n----------CALCULATOR----------\n");
	printf("\nEnter A and B : ");
	scanf("%d%d",&n1,&n2);
	printf("\nA = %d, B = %d\n",n1,n2);
	printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");	
	
	printf("\nChoose From The Following = ");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("\nAddition = %d",(n1+n2));
	}
	else if(choice==2)
	{
		printf("\nSubtraction = %d",(n1-n2));
	}
	else if(choice==3)
	{
		printf("\nMultiplication = %d",(n1*n2));
	}
	else if(choice==4)
	{
		printf("\nDivision = %.2f",(n1/(float)n2));
	}
	else
	{
		printf("Invalid Option");	
	}
}
