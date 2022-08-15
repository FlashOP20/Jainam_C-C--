#include <stdio.h>

void main()

{
	int s1,s2,s3,s4,s5,total;
	float per;
	
	printf("Enter Science Marks : ");
	scanf("%d",&s1);
	printf("Enter Maths Marks : ");
	scanf("%d",&s2);
	printf("Enter English Marks : ");
	scanf("%d",&s3);
	printf("Enter Hindi Marks : ");
	scanf("%d",&s4);
	printf("Enter Computer Marks : ");
	scanf("%d",&s5);
	total = s1+s2+s3+s4+s5;
	printf("Total Marks : %d",total);
	per =(float)total / 5;
	printf("\nPercentage is : %.2f",per);

		if(per>75 && per<=100)
		{
			printf("\nDistinction");	
		}
		else if(per>60 && per<=75)
		{
			printf("\nFirst Class");
		}
		else if(per>50 && per<=60)
		{
			printf("\nSecond Class");
		}
		else if(per>35 && per<=50)
		{
			printf("\nPass Class");
		}
		else
		{
			printf("\nFail");
		}
}

