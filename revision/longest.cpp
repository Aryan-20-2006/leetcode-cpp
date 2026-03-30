#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s){

    vector<int>hash(256,-1);
    int l,r=0;
    int maxlen=0;

    int n=s.size();

    while(r<n){
        if(hash[s[r]]!=-1){ //if you have seen it in the hash map before
            if(hash[s[r]]>=l){ //if repeated, then shrink the window size and move the left pointer
                l=hash[s[r]]+1;
            }
        }
    int length=r-l+1;
    maxlen=max(maxlen,length);
    hash[s[r]]=r;
    r++;
    
    }

    return maxlen;

}

int main(){
    string s="abcabcbb";
    cout<<lengthOfLongestSubstring(s)<<endl;
    return 0;

}