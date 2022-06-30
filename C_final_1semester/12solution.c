#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void minmax(int a[], int n)
{
    int i;
    int min; 
    int max = a[0];

	for ( i = 0; i < n; i++)
    {
        if (a[i]<min)
        {
            min = a[i];
        }
        
    }

    for ( i = 0; i < n; i++)
    {
        if (a[i]>max)
        {
            max = a[i];
        }
        
    }
    
    printf("%d %d", min, max);
    
}



