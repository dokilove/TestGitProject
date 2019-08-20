#include<stdio.h>

int main()
{
	int count = 0;
	scanf("%d", &count);
	for (int i = 0; i < count; ++i)
	{
		for (int j = 0; j < count -i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}



	return 0;
}