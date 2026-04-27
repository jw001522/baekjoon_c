#include <stdio.h>
#include <string.h>

int N, M;
char DNA[1000][51];
char result[51];
int count[51][4];
int min=0;

int min_index(int i){
    int max=0, max_index=0;
    for(int j=0; j<4; j++){
        if(count[i][j]>max){
            max = count[i][j];
            max_index = j;
        }
    }
    min += N-max;
    return max_index;
}

int main(){
    scanf("%d %d", &N, &M);
    for(int i=0; i<N; i++){
        scanf("%s", DNA[i]);
    }

    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            if (DNA[j][i]=='A') count[i][0]++;
            else if(DNA[j][i]=='C') count[i][1]++;
            else if(DNA[j][i]=='G') count[i][2]++;
            else if(DNA[j][i]=='T') count[i][3]++;
        }
    }
    
    for(int i=0; i<M; i++){
        int index=min_index(i);
        if(index==0) result[i]='A';
        else if(index==1) result[i]='C';
        else if(index==2) result[i]='G';
        else if(index==3) result[i]='T';
    }
    printf("%s\n", result);
    printf("%d", min);

    return 0;
}
