#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char letter;

    while(1){
        printf("소문자 : ");
        scanf("%c", &letter);
        letter-=32;
        printf("%c\n", letter);

    }
    return 0;
}