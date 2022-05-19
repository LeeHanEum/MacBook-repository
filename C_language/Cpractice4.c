#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool check(int prices[], size_t prices_len){
    int i;
    for ( i = 0; i < prices_len; i++)
    {
        if (prices[i]<1 || prices[i]>10000)
        {
            return false;
        }
        
    }
    if (prices_len<2 || prices_len>100000)
    {
        return false;
    }
    
    
    return true;
}

// prices_len은 배열 prices의 길이입니다.
int solution(int prices[], size_t prices_len) {

    bool b1 = check(prices, prices_len);
    
    int *answer = (int*)malloc(sizeof(int)*prices_len);
    int i,j;
    

    for ( i = 0; i < prices_len; i++)
    {
        int c = 0;
        if (i==prices_len-1)
        {
            answer[i] = 0;
            break;
        }
        
        for ( j = i+1; j < prices_len; j++)
        {
            if (prices[i]<=prices[j])
            {
                c++;
            }else{
                c++;
                goto finish;
            }
            
        }
        finish : answer[i] = c;
        
    }

    for ( i = 0; i < prices_len; i++)
    {
        printf("%d ", answer[i]);
    }
    

    return *answer;
}

int main(){
    // int prices[5] = {1,2,3,2,3};
    int prices[6] = {5,8,6,2,4,1};
    solution(prices, sizeof(prices)/sizeof(int));
    return 0;
}