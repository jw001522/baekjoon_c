#include <stdio.h>
#include <string.h>

char s[51];
int n;

int lucky(int start, int end){
    if((end - start + 1) % 2 == 1)
        return 0;
    int mid = (start + end) / 2;
    int sum1 = 0, sum2 = 0;
    for(int i = start; i <= mid; i++)
        sum1 += s[i] - '0';
    for(int i = mid + 1; i <= end; i++)
        sum2 += s[i] - '0';
    if(sum1 == sum2)
        return 1;
    return 0;
}

int main() {
    scanf("%s", s);
    n = strlen(s);
    for(int len=n; len>=2; len--){
        for(int start = 0; start <= n-len; start++){
            if(lucky(start, start + len-1)){
                printf("%d\n", len);
                return 0;
            }
        }
    }
    printf("0\n");
    return 0;
}
