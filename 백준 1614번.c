#include <stdio.h>

int main(){
	long long finger, finger_num;
	long long num = 0;
	
	scanf("%lld", &finger);
	scanf("%lld", &finger_num);
	
	switch(finger){
		case 1:
			num = finger_num*8;
			break;
		case 2:
			num = (finger_num/2)*8+1+(finger_num%2)*6;
			break;
		case 3:
			num = (finger_num/2)*8+2+(finger_num%2)*4;
			break;
		case 4:
			num = (finger_num/2)*8+3+(finger_num%2)*2;
			break;
		case 5:
			num = finger_num*8+4;
			break;
	}
	printf("%lld", num);
	
	return 0;
}
