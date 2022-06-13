#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main(){
    
    double a,b,c = 0;
    double result1, result2;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    double D = sqrt(b*b-4*a*c);

    if (a==0)
    {
        result1 = -c/b;
        printf("%lf", result1);  
    }else if (D<0)
    {
        
    }else if (D>=0)
    {
        result1 = (-b+D)/(2*a);
        result2 = (-b-D)/(2*a);
        printf("x=%lf\nx=%lf", result1, result2);
    }
    
    
    


    return 0;
}