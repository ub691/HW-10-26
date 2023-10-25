#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	double principal = 5000;
	double interestRates[] = { 10.0, 10.5, 11.0, 11.5, 12.0 };

	for (int i = 0; i < 5; i++) {
		double rate = interestRates[i];
		double finalAmount = principal * pow(1 + rate / (12 * 100), 12 * 15);
		printf("在 %.1f 利率下，最終金額為 $%.2f\n", rate, finalAmount);
	}

	system("pause");
	return 0;
}
