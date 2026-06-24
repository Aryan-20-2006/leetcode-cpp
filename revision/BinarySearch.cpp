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

//     vector<int>piles={3,6,7,11};
//     int h=8;
//     cout<<minEatingSpeed(piles,h)<<" ";
//     return 0;

// }