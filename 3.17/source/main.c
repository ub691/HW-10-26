#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float accountnumber=0, brginningbalance, totalcharges, totalcredits, creditlimit, balance;
	while (accountnumber != -1)
	{
		printf("Enter account number (-1 to end):");
		scanf("%f", &accountnumber);
		if (accountnumber == -1)
		{
			break;
		}
		printf("Enter brginning balance:");
		scanf("%f", &brginningbalance);
		printf("Enter total charges:");
		scanf("%f", &totalcharges);
		printf("Enter total credits:");
		scanf("%f", &totalcredits);
		printf("Enter credit limit:");
		scanf("%f", &creditlimit);
		balance = brginningbalance + totalcharges - totalcredits;
		
		if (balance > creditlimit)
		{
			printf("Account:%.0f\n", accountnumber);
			printf("Credit limit:%.2f\n", creditlimit);
			printf("Blance:%.2f\n", balance);
			printf("Credit Limit Exceeded.\n");
		}
	}
	printf("END");

	system("pause");
	return 0;
}