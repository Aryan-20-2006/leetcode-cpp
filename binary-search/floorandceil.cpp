//Problem-Floor and Ceil
//Difficulty-Easy

#include<bits/stdc++.h>
using namespace std;


int getFloor(vector<int>&nums, int x){

    
    int left=0;
    int n=nums.size();
    int right=n-1;
    int ans=-1;

    while(left<=right){
        int mid=left+(right-left)/2;
        
        if(nums[mid]<=x){
            ans=nums[mid];
            left=mid+1; //search for a greater element in the right half
        }

        else
            right=mid-1;
    }
    
return ans;

}

int getCeil(vector<int>&nums, int x){

    int left=0;
    int n=nums.size();
    int right=n-1;
    int ans=-1;

    while(left<=right){
        int mid=left+(right-left)/2;

        if(nums[mid]>=x){
            ans=nums[mid];
            right=mid-1; //look for a smaller element in the left half;
        }

        else
            left=mid+1;
    }

return ans;

}

vector<int>getFloorandCeil(vector<int>&nums, int x){

    int floor=getFloor(nums,x);
    int ceil=getCeil(nums,x);

    return {floor,ceil};

}

int main(){

    vector<int>nums={3,4,4,7,8,10};
    int x=5;
    vector<int>result=getFloorandCeil(nums,x);

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";

    }


    return 0;

}