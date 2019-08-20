#include<stdio.h>

int CalculateSum(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; ++i)
	{
		sum += i;
	}

	return sum;
}

int main()
{
	int index = 0;

	scanf("%d", &index);

	int sum = CalculateSum(index);

	printf("%d", sum);
	return 0;
}