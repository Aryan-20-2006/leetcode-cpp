#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        
        int currsum=0;
        int maxsum=nums[0];

        for(int i=0;i<nums.size();i++){
            currsum+=nums[i];

            if(currsum>maxsum)
                maxsum=currsum;

            if(currsum<0)
                currsum=0;
            
        
        }
    return maxsum;

    }

int main(){

    vector<int>nums={-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(nums)<<endl;
    return 0;


}