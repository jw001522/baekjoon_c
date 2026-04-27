#include <stdio.h>

int main()
{
	int a, b, result;
	scanf("%d %d", &a, &b);
	
	result = a * (b % 10);
	printf("%d\n", result);
	result = a * ((b / 10) % 10);
	printf("%d\n", result);
	result = a * (b / 100);
	printf("%d\n", result);
	result = a * b;
	printf("%d\n", result);
	
	return 0;
}
