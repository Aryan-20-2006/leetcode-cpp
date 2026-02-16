#include<bits/stdc++.h>
using namespace std;



//You are counting all the ways so u can get a maxsum
//You cannot rob two adjacent houses at once
/*
[1,2,3,1]

lets say I go to house 3 and 4 , even though the sum is max i.e 4
I cant rob them since they two are adjacent to each other
Same goes for house 2 and 3
So I can only rob house 1 and 3 which gives me sum as 4 and that is max


Its basicallly adding up the sum of alternate houses
From those alternate sums, you have to find max

//Need to keep a track of odd and even house no's
//Then find the max of them

*/

int rob(vector<int>&nums){

    //using prev for space optimization
    int n=nums.size();
    int prev=nums[0]; //prev=i-1
    int prev2=0; //prev2=i-2
    for(int i=1;i<nums.size();i++){

        int take=nums[i];
        
        if(i>1)
            take+=prev2;

        int nontake=0+prev;

        int curr=max(take,nontake);
        prev2=prev;
        prev=curr;

    }

    return prev;


}

int main(){

    vector<int>nums={1,2,3,1};
    cout<<rob(nums)<<"";
    return 0;

}