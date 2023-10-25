#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float hour = 0, rate, salary, overtime;
	while (hour != -1)
	{
		printf("Enter  # of hours worked (-1 to end):");
		scanf("%f", &hour);
		if (hour == -1)
		{
			continue;
		}
		if (hour <= 40)
		{
			printf("Enter hourly rate of the worker ($00.00):");
			scanf("%f", &rate);

			salary = hour*rate;
			printf("Salary is %.2f\n\n", salary);
		}
		if (hour > 40)
		{
			printf("Enter hourly rate of the worker ($00.00):");
			scanf("%f", &rate);
			overtime = hour - 40;
			salary = hour * rate + overtime * rate / 2;
			printf("Salary is %.2f\n\n", salary);
		}
		

	}
	printf("END\n");

	system("pause");
	return 0;
}