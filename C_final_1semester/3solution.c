#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (){

    double change, result;
    int won;

    printf("환율을 입력하시오 : ");
    scanf("%lf", &change);

    printf("원화 금액을 입력하시오 : ");
    scanf("%d", &won);

    result = won/change;

    printf("원화 %d원은 %lf달러 입니다.",won, result);

    return 0;
}