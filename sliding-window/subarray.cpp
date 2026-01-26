//Problem:Subarray Sum Equals K
//Difficulty:Medium



#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>&nums, int k){

        int prefix_sum=0; //take the prefix sum
        int count=0; //frequency of subarrays


        unordered_map<int,int>mp; //hash table to store sum and frequencies

        mp[0]=1; //initial state where sum is 0 and frequency is 1


        for(int i=0;i<nums.size();i++){

                prefix_sum+=nums[i];

            
                count+=mp[prefix_sum-k]; //if we have seen prefixsum-k before then increment the count
        

                mp[prefix_sum]++; //storing frequency of sum
        }

        return count;
    }




int main(){

    vector<int> nums={1,1,1};
    int k=2;

    cout<<subarraySum(nums,k)<<endl;
    return 0;





}





