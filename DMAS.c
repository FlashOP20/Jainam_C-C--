#include <stdio.h>

void main()

{
	int a,b;
	printf("Enter Value A= ");
	scanf("%d",&a);
	printf("Enter Value B= ");
	scanf("%d",&b);
	printf("A = %d , B = %d",a,b);
	printf("\nAddition = %d",(a+b));
	printf("\nSubtraction = %d",(a-b));
	printf("\nMultiplication = %d",(a*b));
	printf("\nDivision = %.2f",(a/(float)b));
}
