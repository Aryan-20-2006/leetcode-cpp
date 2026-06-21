//Problem-Counting occurences in a sorted array
//Difficulty-Easy

#include<bits/stdc++.h>
using namespace std;

//take the first and last occurences and find its length

int firstOccur(vector<int>&arr, int target){

    int n=arr.size();
    int left=0;
    int right=n-1;
    int ans;

    while(left<=right){
        int mid=left+(right-left)/2;

        if(arr[mid]==target){
            ans=mid;
            right=mid-1; //search in the left half
        }

        else{
            if(arr[mid]<target)
                left=mid+1;
            else
                right=mid-1;

        }
    }

    return ans;

}


int lastOccur(vector<int>&arr, int target){

    int n=arr.size();
    int left=0;
    int right=n-1;
    int ans;

    while(left<=right){
        int mid=left+(right-left)/2;

        if(arr[mid]==target){
            ans=mid;
            left=mid+1; //search in the right half
        }

        else{
            if(arr[mid]<target)
                left=mid+1;
            else
                right=mid-1;

        }
    }

    return ans;

}

int countOccurences(vector<int>&arr, int target){



    int first=firstOccur(arr,target);
    int last=lastOccur(arr,target);
    
 
    if(first==-1) //target value doesnt exist in the array
        return 0;

    return last-first+1;

}


int main(){

    vector<int>arr={5,5,5,5,5,5};
    int target=5;
    cout<<countOccurences(arr,target)<<" ";
    return 0;

}
