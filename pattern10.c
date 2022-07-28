/******** C program to print the below pattern

 1
 * *
 3 3 3 
 * * * * 
 5 5 5 5 5 

 ***************/

#include<stdio.h>

int main()
{
	int i,j,num;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2 != 0)
				printf("%d ",i);
			else
				printf("* ");
		}
		printf("\n");
	}
	return 0;
}

