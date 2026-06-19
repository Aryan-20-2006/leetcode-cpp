//Problem-Lower Bound
//Difficulty-Easy

#include<bits/stdc++.h>
using namespace std;

// int lowerBound(vector<int>&nums, int x){

//     int n=nums.size();

//     for(int i=0;i<n;i++){
//         if(nums[i]>=x){
//             return i;
//         }
//     }

// return n;

// }

// int main(){

//     vector<int>nums={3,5,8,15,19};
//     int x=9;
//     cout<<lowerBound(nums,x)<<" ";
//     return 0;

// }

//Upper bound
//Difficulty-Easy

int upperbound(vector<int>&nums, int x){

    int n=nums.size();

    for(int i=0;i<n;i++){
        if(nums[i]>x)
            return i;
    }

return n;

}

int main(){

    vector<int>nums={3,5,8,15,19};
    int x=9;
    cout<<upperbound(nums,x)<<" ";
    return 0;

}