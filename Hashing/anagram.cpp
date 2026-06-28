//Valid Anagram
//Difficulty-Easy

#include<bits/stdc++.h>
using namespace std;

// bool isAnagram(string s, string t){

//     sort(t.begin(),t.end());
//     sort(s.begin(),s.end());

//     if(s==t)
//         return true;


// return false;

// }

//Optimal Soln-Count frequencies
bool isAnagram(string s, string t){

    vector<int>freq(26,0);

    //for the string to be an anagram, the length should be equal
    if(s.size()!=t.size())
        return false;

    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }

    for(int i=0;i<t.size();i++){
        freq[t[i]-'a']--;
    }

    for(int count:freq){
        if(count!=0)
            return false;
    }

return true;

}


int main(){

    string s="anagram";
    string t="nagaram";
    cout<<isAnagram(s,t)<<" ";
    return 0;

}