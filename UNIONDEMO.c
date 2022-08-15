#include <stdio.h>

struct Employee
{
	int eid;
	char name[10];
	float esal;
};

void main()
{
	struct Employee e1;
	
	printf("Enter ID : ");
	scanf("%d",&e1.eid);
	printf("\n\nID = %d",e1.eid);
	printf("\n\nEnter Name : ");
	scanf("%s",&e1.name);
	printf("\n\nNAME = %s",e1.name);
	printf("\n\nEnter Salary : ");
	scanf("%f",&e1.esal);
	printf("\n\nSALARY = %.2f",e1.esal);
} 
