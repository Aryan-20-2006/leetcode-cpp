//Problem-Reverse Every Word in a String
//Difficulyt-Easy

#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s){

    
    int n=s.size();
    reverse(s.begin(),s.end());
    string ans;
    
    for(int i=0;i<n;i++){ //for every word
        string word;
        while(i<n && s[i]!=' '){ //checking for 1 word
            word+=s[i];
            i++;
    }

    reverse(word.begin(),word.end());

    if(word.size()>0){
        ans+=" "+word;
    }

    }

return ans.substr(1); //since we dont want the starting space

}

int main(){

    string s="Welcome to the jungle";
    cout<<reverseWords(s)<<" ";
    return 0;

}