//Problem-Anagrams in a string
#include<bits/stdc++.h>
using namespace std;

// vector<int>findAnagrams(string s, string p){

//     vector<int>pfreq(256,0);
//     vector<int>sfreq(256,0);
//     vector<int>result;

//     //creating a freq array for p where the counts are stored 
//     for(int i=0;i<p.size();i++){
//         pfreq[p[i]-'a']++;
//     }

//     //creating a freq array for the sliding window, i is the ending index
//     for(int i=0;i<s.size();i++){
//         sfreq[s[i]-'a']++;

//         if(i>=p.size()){
//             sfreq[s[i-p.size()]-'a']--; //remove the outgoing element
//         }

//         if(pfreq==sfreq){
//             result.push_back(i-p.size()+1);
//         }
//     }

//     return result;

// }

//Permutations in string
//Assuming p is the string which can have permutations and s is the substring 

// bool checkInclusion(string p, string s){

//     vector<int>pfreq(256,0);
//     vector<int>sfreq(256,0);
//     vector<int>result;

//     for(int i=0;i<p.size();i++){
//         pfreq[p[i]-'a']++;
//     }

//     for(int i=0;i<s.size();i++){

//         sfreq[s[i]-'a']++;

//         if(i>=p.size()){
//             sfreq[s[i-p.size()]-'a']--;
//         }

//         if(pfreq==sfreq){
//             return true;
//         }

//     }

//     return false;

// }

//Maximum Average SubArray I

// double findMaxAverage(vector<int>&nums, int k){

//     int i=0;
//     int n=nums.size();
//     int sum=0;

//     for(int i=0;i<k;i++){
//         sum+=nums[i];
//     }

//     double maxSum=sum;

//     for(int i=k;i<n;i++){
//         sum+=nums[i];
//         sum-=nums[i-k];

//         maxSum=max(maxSum,(double)sum);
//     }

//     return maxSum/k; //Since its average

// }

//Minimum Size Subarray Sum
// int minSubArrayLen(int target, vector<int>&nums){

//     int sum=0;
//     int minlen=INT_MAX;
//     int n=nums.size();
//     int i=0;

//     for(int j=i;j<nums.size();j++){

//         sum+=nums[j];

//         while(sum>=target){

//             int length=j-i+1;
//             minlen=min(minlen,length);
//             sum-=nums[i]; //shrink the window size
//             i++;
//         }

//         if(minlen==INT_MAX){
//             return 0;
//         }
//     }

//     return minlen;

// }


//First negative in every window of size k

/*

for(int i=0;i<n-k;i++)
    bool found=false;
for(j=i;j<i+k;j++){
    if(arr[j]<0)
        result.push_back(arr[j]);
        bool found=true;
        break;
}

    if(!found)
        return 0;

return result;
*/

//Optimal soln-Use a queue to store the negative elements

// vector<int>firstNeg(vector<int>&arr, int k){


//     vector<int>result;
//     queue<int>q;
//     int n=arr.size();

//     for(int i=0;i<n;i++){
//         if(arr[i]<0)
//             q.push(arr[i]);

//         //checking if the window is complete
//         if(i>=k-1){

//             if(q.empty())
//                 result.push_back(0);

//             else
//                 result.push_back(q.front());

            
//             //checking if the queue is not empty and when we have to slide the window if the outgoing element is equal to q.front()
//             if(!q.empty() && q.front()==arr[i-k+1]){
//                 q.pop();
//             }

//         }


//     }

// return result;

// }

// int main()
// {

//     vector<int>arr={12,1,3,5};
//     int k=3;
    
//     vector<int>result=firstNeg(arr,k);
//     for(int i=0;i<result.size();i++){
//         cout<< result[i] << " ";
//     }

//     return 0;

// }


