#include<bits/stdc++.h>
using namespace std;

vector <int> nextGreaterElement(vector<int>& nums1, vector<int> &nums2){


    unordered_map<int,int>map;
    stack<int>st;

    for(int i=0;i<nums2.size();i++){
        while(!st.empty() && st.top()<nums2[i]){
            map[st.top()]=nums2[i];
            st.pop();
        }

        st.push(nums2[i]);
    }


    while(!st.empty()){
        map[st.top()]=-1;
        st.pop();
    }

    vector<int>ans;
    for(int j=0;j<nums1.size();j++){
        ans.push_back(map[nums1[j]]);
    }

}