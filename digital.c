//Problem:Digial balance
//Difficult:Easy

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){



    int diff;
    int sum_even=0;
    int sum_odd=0;
    int n;
    scanf("%d",&n);
   
    int i=0;

    while(n>0){
        
        int digit=n%10;
        if(i%2==0){
            sum_even+=digit;
        }
        else{
            sum_odd+=digit;
        }

        i++;
        n=n/10;
    }

    diff=abs(sum_odd-sum_even);

    printf("%d\n",diff);


    return 0;


}