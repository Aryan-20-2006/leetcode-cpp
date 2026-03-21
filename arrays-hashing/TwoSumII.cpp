//Problem-Two Sum II-Input Array is Sorted
//Difficulty:Medium

/*We use the concept of two pointers
Take a left pointer and right pointer
int left=0, int right=numbers.size()-1
sum will be nums[left]+nums[right]
if the sum is too small, move left pointer towards right
else if sum is too large, moves right pointer towards left

*/

#include<bits/stdc++.h>
using namespace std;

// vector<int> twoSum(vector<int>&numbers, int target){

//         for(int i=0; i<numbers.size(); i++){
//             for(int j=i+1;j<numbers.size();j++){

//                 if(numbers[i]+numbers[j]==target){
//                     return {i,j};
//                 }
//             }
//         }

//         return {}; //empty vector
// }

vector<int> twoSum(vector<int>&numbers, int target){

    int left=0;
    int right=numbers.size()-1;


    while(left<right){
        int sum=numbers[left]+numbers[right];

        if(sum==target){
            return{left+1,right+1};
        }

        if(sum<target)
            left++;
        else
            right--;

    }

return {}; //return empty

}

int main(){

    vector<int>numbers={2,7,11,15};
    int target=9;

    vector<int>result=twoSum(numbers,target);

    if(result.size()==2){
        cout<<result[0]<<" "<<result[1];

    }
    else{
        cout<<"Not found";
    }

    return 0;

}
