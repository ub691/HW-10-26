#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, k, q;
	for (i = 1; i <= 5; i++)
	{
		for (j = 5; j >= i; j--)
		{
			printf(" ");
		}
		for (k = 1; k <= i; k++)
		{
			printf("*");
		}
		for (q = 2; q <= i; q++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = 1; i <= 4; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (k = 4; k >= i; k--)
		{
			printf("*");
		}
		for (q = 3; q >= i; q--)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}