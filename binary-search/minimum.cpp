//Problem-Find Minimum in a Sorted Array
//Difficuly-Easy

#include<bits/stdc++.h>
using namespace std;

//Brute Force Approach

// int findMin(vector<int>&arr){

//     int min=arr[0]; 

//     for(int i=0;i<arr.size();i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }

//     }

// return min;

// }

int findMin(vector<int>&arr){

    int low=0;
    int n=arr.size();
    int high=n-1;
    int min;

    while(low<high){
        int mid=low+(high-low)/2;

        if(arr[mid]>arr[high]){ //minimum is in the right half
            low=mid+1;
        }

        else{
            high=mid; //minimum lies in the left half including mid
        }

    }

return arr[low];

}

int main(){

    vector<int>arr={4,5,6,7,0,1,2};
    cout<<findMin(arr)<<" ";
    return 0;

}