#include <stdio.h>

int main(){

    int i, k, j;

    for (i = 1; i <= 100; i++)
    {
        for (k = 1; k <= 100; k++)
        {
            for ( j = 1; j <= 100; j++)
            {
                if ((i*i + k*k) == j*j)
                {
                    printf("%d %d %d\n", i, k, j);
                }
                
            }
            
        }
        
    }
    

    return 0;
}