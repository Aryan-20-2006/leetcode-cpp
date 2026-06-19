#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>&arr, int k){


    int n=arr.size();
    int low=0;
    int high=n-1;

    while(low<=high){
        int mid=low+(high-low)/2;

        if(arr[mid]==k)
            return mid;
        else{
            if(arr[mid]<k)
                low=mid+1;

            else{
                high=mid-1;
            }
        }

    }

return -1;

}

int main(){

    vector<int>arr={2,4,6,8,10,12,14};
    int k=10;
    cout<<binarySearch(arr,k)<<" ";
    return 0;

}