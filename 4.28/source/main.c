#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float man=0, salary,rate, sales, rate2;
	int identity,hour,overtime, amount;
	
	while (man != -1)
	{
		printf("Enter identity(-1 to end):");
		scanf("%f", & man);
		identity = man+0;
		switch (identity)
		{
			case 1:
				printf("Enter your weekly salay:");
				scanf("%f", &salary);
				printf("Your weekiy salsy is %f\n", salary);
				break;
			case 2:
				printf("Enter your work hours:");
				scanf("%d", &hour);
				if (hour <= 40)
				{
					printf("Enter hourly rate of the worker ($00.00):");
					scanf("%f", &rate);

					salary = hour * rate;
					printf("Weekly salary is %.2f\n\n", salary);
				}
				if (hour > 40)
				{
					printf("Enter hourly rate of the worker ($00.00):");
					scanf("%f", &rate);
					overtime = hour - 40;
					salary = hour * rate + overtime * rate / 2;
					printf("Weekly salary is %.2f\n\n", salary);
				}
				break;
			case 3:
				printf("Enter your gross weekly sales:");
				scanf("%f", &sales);
				salary = 250 + sales * 0.057;
				printf("Your weekiy salsy is %.2f\n", salary);
				break;
			case 4:
				printf("Enter your fixed amount:");
				scanf("%d", &amount);
				printf("Enter  rate of the fixed amount ($00.00):");
				scanf("%f", &rate2);
				salary =rate2*amount;
				printf("Weekly salary is %.2f\n\n", salary);
			default:
				break;
		}
	}
	printf("END");

	system("pause");
	return 0;
}