#include <stdio.h>

void main()

{
	int rollno,s1,s2,s3,total;
	char name[10];
	float per;
	
	printf("\n--------------Enter The Details---------------\n");
	printf("Enter Roll No : ");
	scanf("%d",&rollno);
	printf("Enter Name : ");
	scanf("%s",&name);
	printf("Enter Science Marks : ");
	scanf("%d",&s1);
	printf("Enter Maths Marks : ");
	scanf("%d",&s2);
	printf("Enter English Marks : ");
	scanf("%d",&s3);
	total = s1+s2+s3;
	printf("Total Marks : %d",total);
	per =(float)total / 3;
	printf("\nPercentage is : %.2f",per);

	
}
