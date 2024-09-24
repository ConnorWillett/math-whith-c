#include <stdio.h>

int main(void)
{
	int a[3], b[3], crossprod[3];


	for (int i = 0; i < 3; i++)
	{
	printf("enter vector position %d  : ",i+1);
	scanf("%d",&a[i]);
	}
	printf("now we need a seconde vector\n");

	for (int i = 0; i < 3; i++)
	{
		printf("enter vector position %d  : ",i+1);
		scanf("%d",&b[i]);
	}
	
	crossprod[0] = (a[1]*b[2])-(a[2]*b[1]);	
	crossprod[1] = (a[2]*b[0])-(a[0]*b[2]);	
	crossprod[2] = (a[0]*b[1])-(a[1]*b[0]);	

	printf("the cross product is ");

	for (int i = 0; i < 3; i++)
	{
		printf("%d ",crossprod[i]);
	}

	puts("");
	
	return 0;
}

