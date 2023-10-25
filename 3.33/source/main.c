#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int width = 0, height = 0;
	printf("Enter width:");
	scanf("%d", &width);
	printf("Enter height:");
	scanf("%d", &height);
	for (int i = 0; i < height; i++) 
	{
		for (int j = 0; j < width; j++) 
		{
			if (i == 0 || i == height - 1) printf("+");
			else if (j == 0 || j == width - 1) printf("+");
			else printf(" ");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}