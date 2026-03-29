//Problem:Move Zeroes
//Difficulty:Easy

/*You have an array nums, you have to move all the zeroes to the end of it
At the same time, you have to maintain the relative order of the non-zero elements
 
nums=[0,1,0,3,12]
Output:[1,3,12,0,0]


*/

/*Thought Process
Lets say I have one pointer i and another pointer j at 0 and 1 respectively
Since zeroes have to be at the end
i pointer moves anyways but j moves only when it is not encoutnering another zero




*/


#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>&nums){

    int n=nums.size();
    int j=0; //where the next non-zero element should go


    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
        
    }

}

int main(){

    vector<int>nums={0,1,0,3,12};
    
    moveZeroes(nums);

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;
    }

    return 0;


}