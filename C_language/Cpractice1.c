#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void solution() {
    int i,k,j,n;
    //int sum;
    int a=1;
    int sum[a];
    int prime=0;
    int nums[4] = {1,2,3,4};
    //int nums[5] = {1,2,3,4,5};
    int nums_len = sizeof(nums)/sizeof(int);//배열 원소의 개수


// 배열 원소 중에서 3개를 골라 더한 값을 배열에 담는 로직
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
                        printf("%d %d %d %d %d\n", i,j,k, nums[i]+nums[k]+nums[j],a-1);
                        sum[0]=nums[i]+nums[k]+nums[j];
                        a++;
                        sum[1]=sum[0];                        
                        
                    }
                    
               }
                        
           }
                    
         }

    

         

   
/*
// 배열 원소 중에서 중복되는 것이 있으면 그 원소를 제거하는 로직
    for (i = 0; i < a-1; i++)
    {
        for ( j = i+1; j < a-1; j++)
        {
            
            
        } 
        
    }

    
    for ( i = 0; i < a-1; i++)
    {
        int x=0;
        for(n=1; n<=sum[i]; n++){
            if (sum[i]%n==0){
                x++;
            }else{

            }

        }

        if(x==2){
            printf("%d는 소수\n", sum[i]);
            prime++;
        }else{
            printf("%d는 소수가 아님\n", sum[i]);
        }   

        //printf("%d", sum[i]);
    }
    
    printf("소수의 개수는 %d", prime);
    
    */
}


int main (){
    solution();
    return 0;
}

    // 주어진 숫자 중 서로 다른 3개를 골라 더함
    // 더한 숫자 중 소수가 있는지 확인
    // 소수가 확인 되면 prime++
    // prime의 개수를 리턴

    // [1,2,3,4]
    // 6,