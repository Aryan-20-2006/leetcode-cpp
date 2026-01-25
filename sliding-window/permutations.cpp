//Pattern:Sliding window
//Difficult:Medium

#include<bits/stdc++.h>
using namespace std;


bool checkInclusion(string s1,string s2){

    vector<int> freq(26,0), window(26,0);

    for(char c:s1){
        freq[c-'a']++;
    }

    int left=0;

    for(int right=0;right<s2.size();right++){
        window[s2[right]-'a']++;

        if(right-left+1>s1.size()){
            window[s2[left]-'a']--;
            left++;
        }


        if(right-left+1==s1.size()){
            bool match=true;
            for(int i=0;i<26;i++){
                if(freq[i]!=window[i]){
                    match=false;
                    break;
                }
            }

            if(match) return true;
        }
    }

    return false;

}

int main(){

    string s1="ab";
    string s2="eidbaooo";

    cout<<(checkInclusion(s1,s2)? "true":"false");
    return 0;

}