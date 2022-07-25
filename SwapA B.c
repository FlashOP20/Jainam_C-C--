#include <stdio.h>

void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void main()
{
		int a = 10, b = 30;
		printf("\nBefore swap A : %d, B : %d",a,b);	
		swap(&a,&b);
		printf("\nAfter swap A : %d, B : %d",a,b);
}
