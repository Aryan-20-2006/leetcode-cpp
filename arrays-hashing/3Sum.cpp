//Problem: 3Sum
//Difficulty: Medium

/*You have an array nums
You have to return triplets [nums[i],nums[j],nums[k]]
i!=j i!=k and j!=k
nums[i]+nums[j]+nums[k]==0;
the output cannot contain duplicate triplets
*/

/*Thought process
- You iterate through the array
- In this problem, since they have used i,j,k 
- So, instead of two there are three pointers used
- but how will I know what index does what
- its like you start with -1 but your sum is not 0
- so you move to 0 so -1+0
- then -1,0,1=0 so you stop
- but what if its at a different posiiton and that element makes it zero

*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums){

    int n=nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        if(i>0 && nums[i]==nums[i-1])
            continue; //goes to the next step i.e goes back to the for loop
        int j=i+1;
        int k=n-1;

        //since the position of i is anyways a constant
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum<0){
                j++; //try to increase the sum so it becomes 0 so you move
            }

            else{
                if(sum>0){
                    k--;
                }

                else{
                    vector<int>temp={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++; //j and k cant be the same so you move j to the next and k to left
                    k--;
                    while(j<k && nums[j]==nums[j-1]){
                        j++;
                    }
                    while(j<k && nums[k]==nums[k+1]){
                        k--;
                    }
                }
            }
        }

        
    }

return ans;
}