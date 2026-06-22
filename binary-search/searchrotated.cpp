//Problem-Search in a rotated sorted array-I
//Difficulyt-Medium

#include<bits/stdc++.h>
using namespace std;

int search(vector<int>&nums, int k){

    int low=0;
    int n=nums.size();
    int high=n-1;

    while(low<=high){
        int mid=low+(high-low)/2;

        if(nums[mid]==k){
            return mid;
        }

        //check if the left half is sorted

        if(nums[low]<=nums[mid]){
            if(k>=nums[low] && k<=nums[mid]){
                high=mid-1; //check in the left half
            }

            else{
                low=mid+1;
            }

        }


        //check if the right half is sorted
            else{
                if(k>=nums[mid] && k<=nums[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }

            }

        }

        return -1;

}


int main(){

    vector<int>nums={4,5,6,7,0,1,2};
    int k=0;
    cout<<search(nums,k)<<" ";
    return 0;


}
