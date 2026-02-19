#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>&nums){

sort(nums.begin(),nums.end());


//     for(int i=1;i<nums.size();i++){
//         if(nums[i]==nums[i-1])
//             return true;

//     }

//     return false;

// }

unordered_set<int>s;

for(int i=0;i<nums.size();i++){ //or use ranged base for(int num:nums)
    if(s.count(nums[i]))
        return true;

    s.insert(nums[i]);

}

return false;


}

int main(){

    vector<int> nums={1,2,3,1};
    cout<<containsDuplicate(nums)<<"";
    return 0;

}


/*

nums=[1,2,3,1]
if i=1, i.e starts from 1 
nums[i]=nums[i-1]  //because if i started from 0 then nums[0]=nums[-1] which is incorrect so it starts at 1

You can use sort but time complexity is nlogn
So its better to use an unordered set which works like hashing and the time complexity is n

unordered_set Approach(this uses extra space)

unordered_set<int>s;

for(int i=0;i<nums.size();i++){ //or use ranged base for(int num:nums)
    if(s.count(i))
        return true;

    s.insert(i);

}



*/


