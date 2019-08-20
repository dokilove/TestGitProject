#include "util.h"
#include<stdio.h>

void CheckOdd(int n)
{
	bool check = n % 2 == 1;

	if (check)
	{
		printf("È¦¼ö\n");
	}
	else
	{
		printf("Â¦¼ö\n");
	}
}

int CalculateOddSum(int Number)
{
	bool isOddNumber = Number % 2 == 1;

	int sum = 0;

	for (int i = 1; i <= Number; ++i)
	{
		bool isOdd = i % 2 == 1;
		if (isOddNumber == isOdd)
		{
			printf("sum %d i %d\n", sum, i);
			sum += i;
		}
	}

	return sum;
}
