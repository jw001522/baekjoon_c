#include <stdio.h>
#include <string.h>

char* s(char *str){
    static char result[101];
    result[0] = '\0';

    if(strlen(str)%2 == 1){
        strcpy(result, str);
        return result;
    }

    char sam[101] = "";
    for(int i=0; i<strlen(str); i+=2){
        for(int j=0; j<str[i]-'0'; j++){
            strncat(sam, &str[i+1], 1);
        }
    }

    if(strcmp(sam, str) == 0){
        strcpy(result, sam);
        return result;
    }
    return s(sam);
}

int main(){
    int i = 1;
    char str[101];

    while(1){
        scanf("%s", str);
        
        if(strcmp(str, "0") == 0){
            break;
        }
        printf("Test %d: %s\n", i++, s(str));
    }
    return 0;
}
