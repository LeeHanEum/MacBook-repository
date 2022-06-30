#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

    int a, b, c = 0;

    scanf("%d %d %d", &a, &b, &c);

    if(a+b<c || b+c<a || c+a<b){
        printf("올바르지 않은 삼각형");

    }else{
        printf("올바른 삼각형");
    }

    return 0;
}