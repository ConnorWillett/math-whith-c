#include <stdio.h>

int main(void)
{
	int a[3][3];
	int b[3][3];
	int c[3][3];
	printf("enter a 3 by 3 matrix\n");
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("enter a seconde 3 by 3 matrix\n");

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			c[i][j] = 0;
			for(int k = 0;k < 3; k++)
			{
				c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
			}
		}
	}

	printf("the final matrix is\n");
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("%d\n", c[i][j]);
		}
	}

	return 0;
}
