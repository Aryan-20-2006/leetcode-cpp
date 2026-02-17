#include<bits/stdc++.h>
using namespace std;

//Problem-Coin change
//you have an array coins[]
//int amount-total amount of money

//return the fewest number of coins that you need to make up that amount
//if u cannot make up that amount return -1
/*
example- coins=[1,2,5] , amount=11

here the min number of coins needed to make the output as 11 is 3
3 coins-5+5+1

Note: You can take any number from the array infinite mumber of times

coins=[2], amount=3
Output- -1 (you cant get the amount as 3 from 2)

let's say if the amount is 0
coins=[1], amount=0;

Output=0 //so this will be considered as an edge case
*/

int coinChange(vector<int>& coins, int amount){


    int n=coins.size();


    if(n==0)
        return -1;
    if(amount==0)
        return 0;

    vector<int> prev(amount+1,0),curr(amount+1,0);

    for(int T=0;T<=amount;T++){
        if(T%coins[0]==0)
            prev[T]=T/coins[0];

        else 
            prev[T]=1e9;
    }

    for(int ind=1;ind<n;ind++){
        for(int T=0;T<=amount;T++){
            int nottake=0+prev[T];
            int take=1e9;

        if(coins[ind]<=T){
            take=1+curr[T-coins[ind]];
        }

        curr[T]=min(take,nottake);

        }

        prev=curr;

    }

    int ans=prev[amount];
    if(ans>=1e9)
        return -1;

    return ans;


}