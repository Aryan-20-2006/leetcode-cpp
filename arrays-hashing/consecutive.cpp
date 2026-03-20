//Problem:Longgest Consecutive Seqeunce
//Difficulty:Medium
/*nums = [100,4,200,1,3,2]

It will return 4 since 1,2,3,4 is the longest consecutive sequence

step 1- iterate through the array
step 2- compare each and every element and sort it in ascending order
step 3- check if the difference between each number is 1 if not then dont return those elements
step 4- return those elements

but what about the longest length? or duplicates

*/

#include<bits/stdc++.h>
using namespace std;


int longestConsecutive(vector<int>&nums){

    // int n=nums.size();

    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-1-i;j++){
    //         if(nums[j+1]<nums[j]){
    //             swap(nums[j],nums[j+1]);
    //         }
    //     }

    // }

    // vector<int>result;

    // for(int i=1; i<n ;i++){
    //     if(nums[i]-nums[i-1]==1){
    //         result.push_back(nums[i]);
    //     }

    // }

    // return result;

    int n=nums.size();

    //if the size is empty there is no longest sequence
    if(n==0)
        return 0;

    int longest=1;

    unordered_set<int>st;

    for(int i=0;i<n-1;i++){ //iterating the array
        st.insert(nums[i]); 

    }


    //iterating through the set-auto it=st.begin();it!=st.end();it++
    for(auto it:st){
        if(st.find(it-1)==st.end()){ //checks if its the first element
            int count=1;
            int x=it; //x=arr[i]
            while(st.find(x+1)!=st.end()){ //in case if its same then this loop wont be there
                x=x+1;
                count=count+1;
            }

            longest=max(longest,count);


        }
    }


    return longest;

}