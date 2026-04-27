#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d", &a);
	
	for(b = 1; b <= 100000; b++){
		printf("%d\n", b);
		if(b == a){
			break;
		}
	}
	return 0;
}
