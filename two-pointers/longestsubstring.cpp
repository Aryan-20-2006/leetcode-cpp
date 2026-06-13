//Problem-Longest Substring Without Repeating Characters
//Difficulty-Medium

#include<bits/stdc++.h>
using namespace std;

int lengthofLongestSubstring(string s){

    int n=s.size();
    
    vector<int>hash(256,-1); //creating a hash array which was initially empty
    int l=0,r=0;
    int maxlen=0;


    while(r<n){
        if(hash[s[r]]!=-1){ //if the character is in the map
            
            if(hash[s[r]]>=l){ //if its within range update the left pointer 
                l=hash[s[r]]+1;
            }


        }

        int length=r-l+1;

        maxlen=max(maxlen,length);
        hash[s[r]]=r; //update the index
        r++;
    }

    return maxlen;

}

int main(){

    string s="pwwkew";
    cout<<lengthofLongestSubstring(s)<<"";
    return 0;

}