#include <stdio.h>

int main()
{
	int h, m, s, t;
	int total;
	scanf("%d %d %d", &h, &m, &s);
	scanf("%d", &t);
	
	total = h * 3600 + m * 60 + s + t;
	h = (total / 3600) % 24;
	m = (total / 60) % 60;
	s = total % 60;
	
	printf("%d %d %d\n", h, m, s);
	
	return 0;
}
