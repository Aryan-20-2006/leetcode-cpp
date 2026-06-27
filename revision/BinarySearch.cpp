//Koko Eating Bananas

#include<bits/stdc++.h>
using namespace std;

// int maximum(vector<int>&piles){

//     int maxi=INT_MIN;
//     int n=piles.size();

//     for(int i=0;i<n;i++){
//         maxi=max(maxi,piles[i]);
//     }

//     return maxi;
// }

// int TotalHours(vector<int>&piles, int hours){

//     int totalhours=0;
//     int n=piles.size();

//     for(int i=0;i<n;i++){
//         totalhours+=(piles[i]+hours-1)/hours;
//     }

//     return totalhours;

// }

// int minEatingSpeed(vector<int>&piles, int h){

//     int low=1; //why low=1-since eating speed is at least k bananas per hour so she has to eat at least one banana
//     int high=maximum(piles); //this is the max value from the array since anything greater doesnt reduce the hours for that pile
//     int n=piles.size();

//     while(low<=high){
//         int mid=low+(high-low)/2;

//         int hours=TotalHours(piles, mid);

//         if(hours<=h){
//             high=mid-1;
//         }

//         else{
//             low=mid+1;
//         }

//     }

// return low;

// }

// int main(){

//     vector<int>piles={7,15,6,3};
//     int h=8;
//     cout<<minEatingSpeed(piles,h)<<" ";
//     return 0;

// }

//Capacity to ship packages within D days


// int maximum(vector<int>&weights){

//     int maxi=INT_MIN;
//     int n=weights.size();
    
//     for(int i=1;i<n;i++){
//         maxi=max(maxi,weights[i]);
//     }

//     return maxi;
// }

// int WeightSum(vector<int>&weights){

//     int sum=0;
//     int n=weights.size();
    
//     for(int i=0;i<n;i++){
//         sum+=weights[i];
//     }

//     return sum;
// }

// int requiredDays(vector<int>&weights, int capacity){

//     int days=1;
//     int load=0;
//     int n=weights.size();

//     for(int i=0;i<n;i++){
//         if(load+weights[i]>capacity){
//             days=days+1;
//             load=weights[i];
//         }

//         else{
//             load+=weights[i];
//         }

//     }

// return days;

// }

// int shipWithinDays(vector<int>&weights, int days){

//     int low=maximum(weights);
//     int high=WeightSum(weights);
    
//     while(low<=high){
//         int mid=low+(high-low)/2;

//         int no_of_days=requiredDays(weights,mid);

//         if(no_of_days<=days){
//             high=mid-1;
//         }

//         else{
//             low=mid+1;
//         }

//     }

// return low;

// }

// int main(){

//     vector<int>weights={1,2,3,4,5,6,7,8,9,10};
//     int days=5;
//     cout<<shipWithinDays(weights,days)<<" ";
//     return 0;
    
// }

//First and last occurence

// int firstOccur(vector<int>&nums, int target){

//     int low=0;
//     int n=nums.size();
//     int high=n-1;
//     int ans=1;

//     while(low<=high){
//         int mid=low+(high-low)/2;

//         if(nums[mid]<=target){
//             ans=mid;
//             high=mid-1;
//         }

//         else{
//             low=mid+1;
//         }

//     }


// return ans;

// }

// int lastOccur(vector<int>&nums, int target){

//     int low=0;
//     int n=nums.size();
//     int high=n-1;
//     int ans=-1;

//     while(low<=high){
//         int mid=low+(high-low)/2;

//         if(nums[mid]>=target){
//             low=mid+1;
//         }

//         else{
//             high=mid-1;
//         }
//     }

// return ans;

// }

// vector<int>findfirstandlastOccurence(vector<int>&nums, int target){

//     int first=firstOccur(nums,target);
//     int last=lastOccur(nums, target);
//     return{first,last};

// }

//Aggressive Cows
//k refers to the cows
// bool canWePlace(vector<int>&nums, int distance, int k){

//     int n=nums.size();
//     int countcows=1;
//     int last=nums[0]; //recently placed cow

//     for(int i=1;i<n;i++){
//         if(nums[i]-last>=distance){
//             countcows++;
//             last=nums[i];
//         }

//         if(countcows>=k){ //if you find a higher value, keep returning true
//             return true;
//         }
//     }

// return false;

// }

// int aggressiveCows(vector<int>&nums, int k){


//     sort(nums.begin(),nums.end());
//     int low=0;
//     int n=nums.size();
//     int high=nums[n-1]-nums[0]; //max-min

//     while(low<=high){
//         int mid=low+(high-low)/2;

//         if(canWePlace(nums,mid,k)==true){
//             low=mid+1;
//         }

//         else{
//             high=mid-1;
//         }
//     }

// return high;

// }

// int main(){

//     vector<int>nums={0,3,4,7,10,9};
//     int k=4; //no of cows to be placed
//     cout<<aggressiveCows(nums,k)<<" ";
//     return 0;


// }


//Lower and Upper bound
// int lowerBound(vector<int>&nums, int x){

//     int low=0;
//     int n=nums.size();
//     int high=n-1;

//     while(low<=high){
//         int mid=low+(high-low)/2;

//         if(nums[mid]>=x){
//             return mid;
//         }

//         else{
//             if(nums[mid]<x){
//                 low=mid+1;
//             }

//             else{
//                 high=mid-1;
//             }

//         }
//     }

// return low;

// }

int upperBound(vector<int>&nums, int x){

    int low=0;
    int n=nums.size();
    int high=n-1;
    int ans=n; //by default answer would be this

    while(low<=high){
        int mid=low+(high-low)/2;

        if(nums[mid]>x){
            ans=mid; //not needed but mid could still be an answer
            high=mid-1; //find a smaller valid index on the left
        }

        else{
            low=mid+1;
        }

    }
    
return ans;
    
}


int main(){

    vector<int>nums={1,2,2,3};
    int x=2;
    cout<<upperBound(nums,x)<<" ";
    return 0;

}






