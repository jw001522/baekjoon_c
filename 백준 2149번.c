#include <stdio.h>
#include <string.h>

#define MAX_KEY_SIZE 12
#define MAX_STRING_SIZE 102
#define MAX_RESULT_ROWS 101
#define MAX_RESULT_COLS 10

char key[MAX_KEY_SIZE], s[MAX_STRING_SIZE], res[MAX_RESULT_ROWS][MAX_RESULT_COLS];
int it[MAX_KEY_SIZE];
int len, len2, i, j;

void bubbleSort(){
    for(i=0; i<len-1; i++){
        for(j=0; j<len-i-1; j++){
            if (key[j] > key[j+1]){
                char temp = key[j];
                key[j] = key[j + 1];
                key[j + 1] = temp;

                int tempIndex = it[j];
                it[j] = it[j + 1];
                it[j + 1] = tempIndex;
            }
        }
    }
}

int main(){
    scanf("%s", key);
    len = strlen(key);

    for(i=0; i<len; i++){
        it[i] = i;
    }

    bubbleSort();

    scanf("%s", s);
    len2 = strlen(s) / len;

    for(j=0; j<len; j++){
        for(i=0; i<len2; i++){
            res[i][it[j]] = s[j*len2+i];
        }
    }

    for(i=0; i<len2; i++){
        for(j=0; j<len; j++){
            printf("%c", res[i][j]);
        }
    }
    return 0;
}
