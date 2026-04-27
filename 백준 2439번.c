#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d", &b);
	
	for(a = 0; a < b; a++){
		for(c = a; c < b - 1; c++){
			printf(" ");
		}
		for(c = 0; c <= a; c++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
