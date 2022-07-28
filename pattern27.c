/******** C program to print the below pattern

  1
  2 3
  5 8 13 
  21 34 55 89 
  144 233 377 610 

 ***************/

#include<stdio.h>

int main()
{
	int i,j,num,a=1,b=0,k=1;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",k);
			b = a;
			a = k;
			k = a + b;
		}
		printf("\n");
	}
	return 0;
}

