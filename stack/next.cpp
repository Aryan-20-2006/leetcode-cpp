//Problem-NexT Greater Element 1
//Difficulty-Easy

#include<bits/stdc++.h>
using namespace std;


//Brute force approach o(n^3) time complexity

//     vector <int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2){

//         vector<int>ans(nums1.size(),-1); //initialize it with no elements first
    

//         for(int i=0;i<nums1.size();i++){
//             for(int j=0;j<nums2.size();j++){
//                 if(nums1[i]==nums2[j]){
//                  //the next element in nums2 which is greater than the current one
//                     for(int k=j+1;k<nums2.size();k++){
//                         if(nums2[k]>nums1[i]){
//                             ans[i]=nums2[k];
//                             break;
//                         }

//                     }
//                     break; //break as we find the element
//                 }
//             }

//         }

//         return ans;

//     }



// int main(){

//     vector<int> nums1={4,1,2};
//     vector<int> nums2={1,3,4,2};
//     vector<int> ans=nextGreaterElement(nums1,nums2);

//   for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<<endl;
//   }

//   return 0;


//optimal soln-Use monotonic stack of time complexity-O(n)

vector <int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2){


    unordered_map<int,int>mp; //stores the size and the index;
    stack<int>st;

    //if u find an element greater than the current one, pop the prev and push the next

    for(int i=0;i<nums2.size();i++){
        while(!st.empty() && st.top()<nums2[i]){
            mp[st.top()]=nums2[i]; //this is the most recent element that is still waiting to find the next greater element

            st.pop(); //pop the previous element


        }   

        st.push(nums2[i]); //push the next greater element
    }


    //remaining elements have no next greater
    while(!st.empty()){
        mp[st.top()]=-1;
        st.pop();
    }

    vector<int>ans;
    for(int j=0;j<nums1.size();j++){
        ans.push_back(mp[nums1[j]]);
    }

    return ans;

}

int main(){

    vector<int> nums1={4,1,2};
    vector<int> nums2={1,3,4,2};
    vector<int> ans=nextGreaterElement(nums1,nums2);

  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<endl;
  }

  return 0;
}