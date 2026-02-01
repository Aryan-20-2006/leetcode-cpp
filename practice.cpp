//Problem:Find Minimum in Rotated Sorted Array
//Difficulty:Medium

#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums){

    int left=0;
    int right=nums.size()-1;

    while(left<right){
        int mid=left+(right-left)/2;

        if(nums[mid]>nums[right]){ //mid is in the left sorted portion
            left=mid+1;
        }

        else{ //mid is in the right sorted portion
            right=mid;
        }

    }

return nums[left];

}

int main(){
    

    vector<int> nums={3,4,5,1,2};
    cout<<findMin(nums)<<endl;
    return 0;
}