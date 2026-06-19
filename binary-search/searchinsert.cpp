//Problem-Search insert position
//Difficulty-Easy

#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>&nums, int target){

    int n=nums.size();
    int left=0;
    int right=n-1;

    while(left<=right){

        int mid=left+(right-left)/2;

        if(nums[mid]==target)
            return mid;
        else{
            if(nums[mid]<target){
                left=mid+1;
            }

            else
                right=mid-1;
        }

    }

return left; //place you would insert if not found

}


int main(){

    vector<int>nums={1,3,5,6};
    int target=7;
    cout<<searchInsert(nums,target)<<" ";
    return 0;

}