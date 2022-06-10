#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    double speed = 300000;
    double dis = 149600000;
    double time;

    time = dis/speed;

    printf("%lf", time);
    return 0;
}