#include <stdio.h>

int main(){
    int N, num = 666, count = 0;
    scanf("%d", &N);

    while (1) {
        int temp = num;
        while (temp) {
            if(temp % 1000 == 666){
                count++;
                break;
            }
            temp /= 10;
        }
        if(count == N) {
            printf("%d", num);
            break;
        }
        num++;
    }
    return 0;
}
