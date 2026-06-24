//Problem-Koko eating bananas
//Difficulty-Medium


#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int>&nums){

    int maximum=nums[0];
    int n=nums.size();

    for(int i=1;i<n;i++){
        maximum=max(maximum,nums[i]);
    }

return maximum;
}

int TotalHours(vector<int>&nums, int hourly){

    int totalhours=0;

    int n=nums.size();

    for(int i=0;i<n;i++){
        totalhours+=(nums[i]+hourly-1)/hourly;
    }

    return totalhours;

}

int minimumRateToEatBananas(vector<int>&nums, int h){

    int low=1;
    int high=findMax(nums);


    while(low<=high){
        int mid=low+(high-low)/2;

        int totalhours=TotalHours(nums,mid);

        if(totalhours<=h){
            high=mid-1;
        }

        else{
            low=mid+1;
        }
    }

return low;

}

int main(){

    vector<int>nums={3,6,7,11};
    int h=9;
    cout<<minimumRateToEatBananas(nums,h)<<" ";
    return 0;

}