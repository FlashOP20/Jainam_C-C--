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
	
	switch(choice)
	{
		case 1: printf("Addition = %d",(n1+n2));
			break;
	
		case 2: printf("Subtraction = %d",(n1-n2));
			break;
	
		case 3: printf("Multiplication = %d",(n1*n2));
			break;
	
		case 4: printf("Division = %.2f",(n1/(float)n2));
			break;
	
		default: printf("Invalid Option");
			break;
	}
}
