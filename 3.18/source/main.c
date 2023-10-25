#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float sales = 0, salary;
	while (sales != -1)
	{
		printf("Enter  sales in dollars (-1 to end):");
		scanf("%f", &sales);
		if (sales == -1)
		{
			continue;
		}
	
		salary = sales * 0.09 + 200;
		printf("Salary is:%.2f\n\n", salary);

	}
	printf("END\n");

	system("pause");
	return 0;
}