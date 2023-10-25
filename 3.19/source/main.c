#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float principal = 0, rate, days, interest;
	while (principal != -1)
	{
		printf("Enter  loan principal (-1 to end):");
		scanf("%f", &principal);
		if (principal == -1)
		{
			continue;
		}
		printf("Enter interest rate:");
		scanf("%f", &rate);
		printf("Enter term of the charge:");
		scanf("%f", &days);

		interest = principal * rate* days / 365;
		printf("The interest charge is %.2f\n\n", interest);

	}
	printf("END\n");

	system("pause");
	return 0;
}