#include <stdio.h>

int main()
{
	int song, melodie, average;
	scanf("%d %d", &song, &average);
	
	melodie = song * average - (song - 1);
	
	printf("%d\n", melodie);
	
	return 0;
}
