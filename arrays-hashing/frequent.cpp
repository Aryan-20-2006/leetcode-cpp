//Problem:Top K Frequent elements
//Difficulty:Medium


/* 
nums=[1,1,1,2,2,3], k=2 (2 elements which are occuring frequently)

Output-[1,2]

nums=[1]

Output=[1] 

if its one element then return itself

but how do I decide how many times it should appear?

since 2 is appearing twice and 1 is appearing thrice in the first example

but in [1,2,1,2,1,2,3,1,3,2] its 1 and 2 but 3,3 is appearing twice but we dont take that

We can use minheap-time complexity is nlogk

So its better to use bucket sort-O(n) cuz we directly check the frequencies instead of sorting the array which would take nlogn



*/

#include<bits/stdc++.h>
using namespace std;

vector <int> topKFrequent(vector<int>&nums, int k){

    unordered_map<int,int>freq; //storing frequency of each element

    int n=nums.size();

    //counting frequency
    for(int i=0;i<n;i++){
        freq[nums[i]]++;
    }

    //create buckets-the max frequency possible is n(i.e array size)

    vector<vector<int>>bucket(nums.size()+1);

    //fill the buckets
    for(auto it:freq){ // auto is the same as writing pair<const int, int> it
        int number=it.first;
        int frequency=it.second;

        bucket[frequency].push_back(number);


    }

    vector<int> result;

    //traverse from end-count the highest frequency first

    for(int i=n;i>=0 && result.size()<k;i--){

        for(int j=0;j<bucket[i].size();j++){
            result.push_back(bucket[i][j]);
        

        if(result.size()==k)
            break;

        }


    }

    return result;

}

int main(){

    int k=2;
    vector<int>nums={1,1,1,2,2,3};

    vector<int>result=topKFrequent(nums,k);

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

    return 0;


}