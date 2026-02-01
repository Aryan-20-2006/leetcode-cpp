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

    vector<int> nums={11,12,13,14};
    cout<<findMin(nums)<<endl;
    return 0;
}

//lets say we take nums={4,5,6,7,0,1,2}

//case 1:- nums[mid]>nums[right] . 
//Here mid is the 3rd index i.e 7 and right is the 5th index 
//nums[mid]=7, nums[right]=2 ,7>2(true) 
//so left=mid+1,mid=3, so left=4 i.e 0(which is the minimum element)

//case 2:nums[mid]<=nums[right]
//Take the example nums={4,5,6,0,1,2,3}
//nums[mid]=0 and nums[right]=3 , 0<=3(true)
//right=mid, i.e right=3.so nums[3]=0 
//and we keep doing this until left==right
//that is why we return nums[left];