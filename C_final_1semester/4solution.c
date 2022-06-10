#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    double w,h,area,perimeter;
    scanf("%lf %lf", &w, &h);
    area = w*h;
    perimeter = 2*(w+h);

    printf("%lf\t %lf",area, perimeter);
    return 0;
}