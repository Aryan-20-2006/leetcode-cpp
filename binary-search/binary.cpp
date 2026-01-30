//To implement binary search

//Iterative approach-Time complexity-O(log n), Space Complexity-O(1)
#include<bits/stdc++.h>
using namespace std;

int binarySearchIterative(vector<int>& arr, int target){
    int left=0;
    int right=arr.size()-1;

while(left<=right){
    int mid=left+(right-left)/2;

    if(arr[mid]==target){
        return mid;
    }

    else if(arr[mid]<target){
        left=mid+1;
    }

    else{
        right=mid-1;
    }



}

return -1;


}

int main(){
    vector <int> arr={-1,0,3,5,9,12};
    int target=9;
    int result=binarySearchIterative(arr,target);
    cout<<result<<endl;

    return 0;
}
