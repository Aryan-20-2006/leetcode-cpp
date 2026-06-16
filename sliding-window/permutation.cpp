//Problem-Permutation in string
//Difficulty-Medium

#include<bits/stdc++.h>
using namespace std;

bool checkInclusion(string s1, string s2){

    vector<int>s1count(26,0);
    vector<int>s2count(26,0);
    

    //writing the frequencies of s1 array

    for(int i=0;i<s1.size();i++){
        s1count[s1[i]-'a']++; //counting characters of s1
    }

    //sliding window(for the s2 string)
    for(int i=0;i<s2.size();i++){
        s2count[s2[i]-'a']++;

        if(i>=s1.size()){
            s2count[s2[i-s1.size()]-'a']--; //removing the outgoing element
        }

        if(s1count==s2count)
            return true;
    }

return false;

}


int main(){

    string s1="ab";
    string s2="eidbaooo";

    cout<<checkInclusion(s1,s2)<<"";

    return 0;
}