#include <stdio.h>

void main()
{
		int a = 10, c = 30;
		printf("\nAddress of A through variable: %u",&a);	
		printf("\nAddress of C through variable: %u",&c);
		int *b;
		int *d;
		
		b= &a;
		d= &c;
		
		printf("\nAddress of A through pointer : %u",b);
		printf("\nAddress of C through pointer : %u",d);
		
		printf("\nValue of A through variable: %u",a);	
		printf("\nValue of C through variable: %u",c);
		
		printf("\nValue of A through pointer : %u",*(b));
		printf("\nValue of C through pointer : %u",*(d));
}
