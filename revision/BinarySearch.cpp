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


