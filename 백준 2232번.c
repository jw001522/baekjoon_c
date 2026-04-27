#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int graph[50000];
    for(int i=0; i<N; i++){
        scanf("%d", &graph[i]);
    }

    if(N == 1){
        printf("1\n");
    } else{
        if(graph[0] >= graph[1]){
            printf("1\n");
        }
        for(int i=1; i < N-1; i++){
            if(graph[i] >= graph[i-1] && graph[i] >= graph[i+1]){
                printf("%d\n", i + 1);
            }
        }
        if(graph[N-1] >= graph[N-2]){
            printf("%d\n", N);
        }
    }
    return 0;
}
