//Problem-Kadane's algorithm
//Difficulty:Medium

#include<bits/stdc++.h>
using namespace std;

// int maxSubArray(vector<int>&nums){

//     int maxSum=INT_MIN; //handles negative elements (can also be written as nums[0] if we're taking the starting element)
//     int sum=0;

//     for(int i=0;i<nums.size();i++){
//         sum+=nums[i];

//         //update max if current sum is greater
//         if(sum>maxSum)
//             maxSum=sum;

//         //if the sum is negative, reset it to zero
//         if(sum<0)
//             sum=0;
//     }

//     return maxSum;
// }

// int main(){

//     vector<int>nums={-2, -3, -7, -2, -10, -4};
//     cout<<maxSubArray(nums)<<" ";
//     return 0;

// }

//Best time to buy and sell stock-Same concept as kadane

int stockbuySell(vector<int>&arr, int n){

    int maxProfit=0; //since profit cant be negative 
    int currProfit=0;

    for(int i=1;i<n;i++){
        currProfit+=arr[i]-arr[i-1];

        if(currProfit>maxProfit)
            maxProfit=currProfit;
        
        if(currProfit<0)
            currProfit=0;

    }

    return maxProfit;

}

int main(){

    
    vector<int>arr={10,7,5,8,11,9};
    int n=arr.size();
    cout<<stockbuySell(arr,n)<<"";
    return 0;

}