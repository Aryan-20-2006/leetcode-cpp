#include<bits/stdc++.h>
using namespace std;

//return the indices of two numbers such that it adds up to target
vector<int> twoSum(vector<int>& nums, int target){

    //if nums[i]+nums[j]==target
        //return i,j;


    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
        }
    }

    return {}; //or you could write return {-1,-1} but {} is an empty vector

}

int main(){

    vector<int>nums={2,7,11,15};
    int target;
    cin>> target;

    vector<int> result=twoSum(nums,target);

    if(result.size()==2){
        cout<< result[0] << " " << result[1] ;

    }

    else{
        cout<<"Not found";
    }
  
    return 0;

}