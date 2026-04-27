#include <stdio.h>

int main() {
    int i = 0, n, a;
    char c;

    for(scanf("%d", &n); scanf("%c", &c) == 1 && c != '\n';){
        if(c == '-'){
            i = 1;
        }
        scanf("%d", &a);

        if(i){
            n -= a;
        } else {
            n += a;
        }
    }
    printf("%d", n);

    return 0;
}
