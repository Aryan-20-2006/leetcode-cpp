//Problem-Find Peak Element
//Difficulty-Medium

#include<bits/stdc++.h>
using namespace std;


//Brute Force
// int findPeakElement(vector<int>&arr){

//     int n=arr.size();

//     for(int i=0;i<n;i++){
//         if(arr[i-1]<arr[i] && arr[i+1]<arr[i]){
//             return i;
//         }
//     }

// return -1;

// }


//Optimized Approach-Binary Search
int findPeakElement(vector<int>&arr){

    int n=arr.size();

    if(n==1){ //if there is only one element, that would be the peak
        return 0;
    }

    if(arr[0]>arr[1]){ //if the first element is peak, return that no need of doing binary search
        return 0;
    }

    if(arr[n-1]>arr[n-2]){ //if the last element is peak, return that
        return n-1;
    }

    //since we have already done checks for the first and last element, we'll start low=1 and high=n-2
    int low=1;
    int high=n-2;

    while(low<=high){
        int mid=low+(high-low)/2;

        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }

        else{
            if(arr[mid]>arr[mid-1]){ //increasing curve, peak is on the right half
                low=mid+1;
            }

            else{
                high-mid-1;
            }
        }
    }

return -1;

}

int main(){

    vector<int>arr={1,2,1,3,5,6,4};
    cout<<findPeakElement(arr)<<" ";
    return 0;

}