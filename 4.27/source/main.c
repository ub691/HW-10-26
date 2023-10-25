#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c ;
	printf("Pythagorean Triples:\n");
	for (a = 1; a <= 500; a++)
	{

			for (b = 1; b <= 500; b++)
			{
				
					for (c = 1; c <= 500; c++)
					{

						if (a * a + b * b == c * c)
						{
							if (a - b < 0)
							{
								if (b - c < 0)
								{
									printf("%d %d %d\n", a, b, c);
								}
							}
							
						}
						if (a > 500 || b > 500 || c > 500)
						{
							printf(" ");
						}
					}
				
			}
			
		
		
		
	}

	system("pause");
	return 0;
}