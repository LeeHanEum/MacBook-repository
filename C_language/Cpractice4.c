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

    int answer;
    int i;

    // for ( i = 0; i < prices_len; i++)
    // {
    //     printf("%d ",prices[i]);
    // }
    

    return answer;
}

int main (){
    int prices[5] = {1, 2, 3, 2, 3};
    solution(prices, sizeof(prices)/sizeof(int));
    return 0;
}