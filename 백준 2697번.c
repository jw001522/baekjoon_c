#include <stdio.h>
#include <string.h>

void swap(char* a, char* b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int T;
    scanf("%d", &T);

    while(T--){
        char A[81];
        scanf("%s", A);

        int len = strlen(A);
        int i;

        for(i = len - 2; i >= 0 && A[i] >= A[i + 1]; i--){}

        if(i == -1){
            printf("BIGGEST\n");
            continue;
        }

        int j;
        for(j = len - 1; A[j] <= A[i]; j--){}
        
        swap(&A[i], &A[j]);
        for(int low = i + 1, high = len - 1; low < high; low++, high--){
            swap(&A[low], &A[high]);
        }
        printf("%s\n", A);
    }
    return 0;
}
