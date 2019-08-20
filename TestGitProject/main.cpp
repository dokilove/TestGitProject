#include<stdio.h>
#include"util.h"

int main()
{
	int n = 0;

	scanf("%d", &n);
	//CheckOdd(n);

	int result = CalculateOddSum(n);

	printf("%d", result);

	return 0;
}