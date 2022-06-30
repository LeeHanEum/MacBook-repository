#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

    int a, b, c = 0;

    printf("두 개의 정수를 입력하시오(큰수, 작은수) : ");
    scanf("%d %d", &a, &b);

    while (b!=0)
    {
        c = a%b;
        a = b;
        b = c;
    }

    printf("최대공약수는 %d", a);
    
    

    return 0;
}