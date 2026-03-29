//Problem:Squares of a Sorted Array
//Difficulyt:Easy

/*You have an array where the elements are sorted
You have to return an array of squares of each number
after squaring , the elements should also be in the sorted order
*/

/*Thought process
-iterate through the array-for loop
-return the squares and then sort the final array
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& nums){

    vector<int>squares;
    int n=nums.size();
    for(int i=0;i<n;i++){
        squares.push_back(nums[i]*nums[i]);
    }

    sort(squares.begin(),squares.end());

    return squares;

}

int main(){

    vector<int>nums={-4,-1,0,3,10};
    vector<int>result = sortedSquares(nums);

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }

    return 0;


}