//Problem:Longest Substring Without Repeating Characters
//Difficulty:Medum

#include <bits/stdc++.h>
using namespace std;

int lengthofLongestSubstring(string s){


    //vector<int>(size,value)==array of size filled with value
    vector <int> lastSeen(256,-1); //intialize all to not seen
    int maxLength=0;
    int left=0;

    for(int right=0;right<s.size();right++){

        char c=s[right];


        if(lastSeen[c]>=left){ //if seen, shrink
            left=lastSeen[c]+1; // move left to one position after last seen
        }

        lastSeen[c]=right;

        maxLength=max(maxLength,right-left+1);
    }

    return maxLength;
    
}

int main(){

     string s="abcabcbb";

     cout<<lengthofLongestSubstring(s)<<endl;
     return 0;

}




