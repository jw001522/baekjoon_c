#include <stdio.h>

int main()
{
	int h, m, t;
	scanf("%d %d\n %d", &h, &m, &t);
	
	int total = h * 60 + m + t;
	int finh = total / 60 % 24;
	int finm = total % 60;
	
	printf("%d %d\n", finh, finm);
	
	return 0;
}
