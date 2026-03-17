/*Problem:Product except self
Difficulty: Medium


Multiply all the other numbers except the number at the current index
Example:-
nums-[1,2,3,4]

At index 0, nums[0]=1 but we exlcude nums[0] and multiply 2*3*4=24
Similarly for nums[1]=2, 1*3*4=12
nums[2]-->1*2*4=8
nums[3]-->1*2*3=6


left product(prefix array)-product of everything to the left of i
right product(prefix array)-product of everything to the right of i\
and then combine it


answer[i]=(product of elements before i)*(product of elements after i)

*/

#include<bits/stdc++.h>
using namespace std;




vector<int> productExceptSelf(vector<int>&nums){


// int n=nums.size();   

// vector<int>answer(n,1); //initializing the array answer wiht 1 stored in it
// //if this were to be intialized with zero then anything multiplied with zero gives zero is incorrect

// //building the left product

// vector<int>left(n);

// left[0]=1; //nothing on the left

// for(int i=1;i<n-1;i++){ //eg-[1,2,3,4] //there is nothing on the left of 1 so its 1
//     left[i]=left[i-1]*nums[i-1];
// }

// //building the right product
// vector<int>right(n);

// for(int i=n-2;i>0;i--){
//     right[i]=right[i+1]*nums[i+1];

// }

// for(int i=0;i<n;i++){
//     answer[i]=left[i]*right[i];
// }


// return answer;

// }

//we dont have to use two arrays we can save space by reusing the same array

int n=nums.size();

//edge case
if(n==0){
    return {};
}

vector<int>answer(n,1);

//store left inside answer
int prefix=1;

for(int i=0;i<n;i++){
    answer[i]=prefix;
    prefix*=nums[i];
}

//multiply with right

int postfix=1;

for(int i=n-1;i>=0;i--){
    answer[i]*=postfix; //i.e prefix*postfix
    postfix*=nums[i];

}

return answer;

}

int main(){
    vector<int>nums={1,2,3,4};

    vector<int>answer=productExceptSelf(nums);

    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";

    }
    cout<<endl;


return 0;


}