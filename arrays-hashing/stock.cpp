#include<bits/stdc++.h>
using namespace std;

//Problem:Best time to buy and sell stock
//uses the concept of max subarray
/*
if current sum becomes less than 0,reset it to 0
if current sum>maxsum maxSum=current sum
finally return maxSum

*/

int maxProfit(vector<int>& prices){

    int currProfit=0;
    int maxProfit=0;

    for(int i=1;i<prices.size();i++){

        currProfit+=prices[i]-prices[i-1];

        if(currProfit>maxProfit)
            maxProfit=currProfit;
        else{
            if(currProfit<0)
                currProfit=0;
        }


    }


return maxProfit;

}

int main(){

    vector<int>prices={7,1,5,3,6,4};
    cout<<maxProfit(prices)<<endl;
    return 0;


}