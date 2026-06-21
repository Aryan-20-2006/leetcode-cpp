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

//Longest susbtring with k unique characters
// int longsubstr(string s, int k){

//     int maxlen=0;
//     unordered_map<char,int>map;
//     int l=0;
//     int r=0;

//     while(r<s.size()){
//         map[s[r]]++; //keeping increasing character count as you move across the string
    
//         while(map.size()>k) { //checking if the map is valid 

//             map[s[l]]--;
            
//             if(map[s[l]]==0){
//                 map.erase(s[l]);
            
//             }

//             l=l+1;
            
//         }

//         if(map.size()<=k){ //since we're looking for at most k distinct characters
//             int length=r-l+1;
//             maxlen=max(maxlen,length);
            
//         }

//         r=r+1;
//     }

// return maxlen;

// }

// int main(){

//     int k=2;
//     string s="aaabbccd";
//     cout<<longsubstr(s,k)<<" ";
//     return 0;

// }

//Number of susbtrings containing all three characters

//Brute Force-Look for all possible strings containing a,b,c

// int countSubstr(string s){

//     int count=0;
//     int n=s.size();

//     for(int i=0;i<n;i++){
//         vector<int>hash(3,0);

//         for(int j=i;j<n;j++){

//             //mark them as seen
//             hash[s[j]-'a']=1;

//             if(hash[0]+hash[1]+hash[2]==3){
//                 count++;
//             }
//         }
//     }

// return count;

// }

//Optimal approach-Instead of looking for every single susbtring, we can use the 1+min of all three indices to find the total number of susbtrings

int countSubstr(string s){

    int n=s.size();
    vector<int>map(3,-1);
    int count=0;

    for(int i=0;i<n;i++){
        map[s[i]-'a']=i; //updating the index every time 

        if(map[0]!=1 && map[1]!=-1 && map[2]!=-1){ //checking if the characters are there
            count=count+(1+min({map[0],map[1],map[2]}));
        }
    }

return count;

}


int main(){

    string s="abcabc";
    cout<<countSubstr(s)<<" ";
    return 0;

}