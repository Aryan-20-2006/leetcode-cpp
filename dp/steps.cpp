//you have n steps to climb to the top
//you can climb either 1 or two steps
//for eg:- if n is 2 u can take 1+1 step or 2 steps-so output is 2
//lets say n=3, then you can take 1+1+1,1+2,2+1 steps-so output is 3
//basically expressing in how many number of ways I can write it as a sum using 1's and 2's
//if number of steps is equal to zero, the return 1


#include<bits/stdc++.h>
using namespace std;


// int climbStairs(int n){

//     if(n==0)
//         return 1;

//     if(n==1)
//         return 1;

//     return climbStairs(n-1)+climbStairs(n-2);


// }

//optimized version-write in terms of indexes

int climbStairs(int n){

    if(n<=1)
        return 1; //this includes for both n==0 and n==1

    vector<int>dp(n+1); //this is initialzed with zero
    dp[0]=1;
    dp[1]=1;

    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }

    return dp[n];


}






int main(){

    cout<<"Enter the number of steps"<<endl;
    int n;
    cin>>n;
    cout<<climbStairs(n)<<endl;
    return 0;


}