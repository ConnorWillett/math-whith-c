#include <stdio.h>

int main( int argc, char **argv )
{
	int a[3], b[3];
	long dotprod;


	for (int i = 0; i < 3; i++)
	{
		printf("enter vector position %d  : ",i+1);
		scanf("%d",&a[i]);
	}
	printf("now we need a second vector\n");

	for (int i = 0; i < 3; i++)
	{
		printf("enter vector position %d  : ",i+1);
		scanf("%d",&b[i]);
	}


	dotprod = (a[0]*b[0]) + (a[1]*b[1]) + (a[2]*b[2]);

	printf("the dot product of the two vectors is %ld\n", dotprod);
	return 0;
}
