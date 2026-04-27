#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    long long num1 = *(long long *)a;    
    long long num2 = *(long long *)b;    

    if(num1 < num2) 
        return -1;      
    
    if(num1 > num2) 
        return 1;       
   
    return 0;    
}

int main(){
    int n, T;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &T);
        long long soldier[T];

        for(int i = 0; i < T; i++){
            scanf("%lld", &soldier[i]);
        }

        qsort(soldier, T, sizeof(long long), compare);

        long long own = soldier[0];
        int cnt = 1;
        int owner = 0;
        for(int i = 1; i < T; i++){
            if(own == soldier[i]){
                cnt++;
            }
            else{
                own = soldier[i];
                cnt = 1;
            }
            if(cnt > (T / 2)){
                printf("%lld\n", own);
                owner = 1;
                break;
            }
        }
        if(!owner){
            printf("SYJKGW\n");
        }
    }
    return 0;
}
