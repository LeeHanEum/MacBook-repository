#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int object_price, user_pay, payback;
    int p5000, p1000, p500, p100;

    printf("물건 값을 입력하시오 : \n");
    scanf("%d", &object_price);

    printf("사용자가 낸 돈 : \n");
    scanf("%d", &user_pay);

    payback = user_pay-object_price; //6800

    p5000 = payback/5000; 
    payback-=5000*p5000;

    p1000 = payback/1000;
    payback -= 1000*p1000;

    p500 = payback/500;
    payback -= 500*p500;

    p100 = payback/100;
    payback -= 100*p100;

    printf("오천원권 : %d\n 천원권 : %d\n 오백원 동전 : %d\n 백원 동전 : %d\n", p5000, p1000, p500, p100);


    return 0;
}