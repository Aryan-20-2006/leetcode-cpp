//Problem-First and last occurence
//Difficulty-Easy

#include<bits/stdc++.h>
using namespace std;

int getfirst(vector<int>&nums, int target){

    int left=0;
    int n=nums.size();
    int right=n-1;
    int ans=-1;

    while(left<=right){
        int mid=left+(right-left)/2;

        if(nums[mid]==target){
            ans=mid; //storing the index
            right=mid-1; //keep looking for any other occurences in the left half

        }

        else{
            if(nums[mid]<target){
                left=mid+1;
            }

            else
                right=mid-1;
        }


    }

return ans;

}


int getlast(vector<int>&nums, int target){

    
    int left=0;
    int n=nums.size();
    int right=n-1;
    int ans=-1;

    while(left<=right){
        int mid=left+(right-left)/2;

        if(nums[mid]==target){
            ans=mid; //storing the index
            left=mid+1; //keep looking for any other occurences in the right half and that could be the last occurence

        }

        else{
            if(nums[mid]<target){
                left=mid+1;
            }

            else
                right=mid-1;
        }


    }

return ans;

}



vector<int>searchRange(vector<int>&nums, int target){

    int first=getfirst(nums, target);
    int last=getlast(nums, target);
    return {first, last};

}

int main(){

    vector<int>nums={5,7,7,8,8,10};
    int target=6;
    vector<int>result=searchRange(nums, target);

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

return 0;

}