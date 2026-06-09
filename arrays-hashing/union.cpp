//Problem-Union of two sorted arrays
//Difficulty-Easy

#include<bits/stdc++.h>
using namespace std;

vector<int>unionArray(vector<int>&nums1, vector<int>&nums2){

  int n1=nums1.size();
  int n2=nums2.size();

  int i=0;
  int j=0;

  vector<int>unionArray;

  while(i<n1 && j<n2){
    if(nums1[i]<=nums2[j]){
        if(unionArray.size()==0 || unionArray.back()!=nums1[i]){
            unionArray.push_back(nums1[i]);
        } 
        i++;
    }
       
    else{
        if(unionArray.size()==0 || unionArray.back()!=nums2[j]){
            unionArray.push_back(nums2[j]);
       }
        j++;
  }
}


//if the first array gets exhausted

    while(j<n2){
        if(unionArray.size()==0 || unionArray.back()!=nums2[j]){
        unionArray.push_back(nums2[j]);
    }
        j++;
        
    }

    while(i<n1){
        if(unionArray.size()==0 || unionArray.back()!=nums1[i]){
            unionArray.push_back(nums1[i]);
    }

        i++;
    }


    return unionArray;
}



int main(){

    vector<int>nums1={1,2,3,4,5};
    vector<int>nums2={1,3,7};

    vector<int>result=unionArray(nums1,nums2);

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

    return 0;

}