#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (){
    int salary, monthly = 0;

    printf("연봉을 입력하세요 : ");
    scanf("%d", &salary);

    monthly = salary/12;

    printf("월 수령액 : %d", monthly);


    return 0;
}