#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (){
    double rr, area = 0;
    printf("반지름을 입력하시오 : ");
    scanf("%lf", &rr);

    area = rr*rr*3.14;
    printf("원의 면적 : %lf",area);

    return 0;
}