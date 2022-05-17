#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main () {
    int i,k,j,n;
    //int sum;
    int a=0;
    int sum[a];
    int prime=0;
    int nums[4] = {1,2,3,4};
    //int nums[5] = {1,2,3,4,5};
    int nums_len = sizeof(nums)/sizeof(int);//배열 원소의 개수

    for (i = 0; i < nums_len; i++)
        {
            for ( k = 0; k < nums_len; k++)
            {
                for ( j = 0; j < nums_len; j++)
                {
                    if (i==j || i==k || j==k)
                    {
                        //printf("<%d %d %d %d>\n", i,j,k, nums[i]+nums[k]+nums[j]);
                    }else{
                        printf("%d %d %d %d\n", i,j,k, nums[i]+nums[k]+nums[j]);
                        //int sum[a++];
                        //sum[a-1]=nums[i]+nums[k]+nums[j];
                        
                    }
                    
               }
                        
           }
                    
         }
                
         

/*

// 배열 원소 중에서 3개를 골라 더한 값을 배열에 담는 로직
    for (i = 0; i < nums_len; i++)
    {
        for ( k = 0; k < nums_len; k++)
        {
            if (i==k)
            {
                break;
            }else{
                for ( j = 0; j < nums_len; j++)
                {
                    if (i==j || j==k)
                    {
                        break;
                    }else{
                        printf("%d %d %d\n", i,j,k);
                    }
                    
                }
                
            }
            
        }
        
        
    }
    */

    return 0;
}