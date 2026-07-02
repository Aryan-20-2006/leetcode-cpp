//Problem-Isomorphic String
//Difficulty-Easy

#include<bits/stdc++.h>
using namespace std;

bool isomorphic(string s, string t){

    //first check if the lengths are equal
    if(s.size()!=t.size()){
        return false;
    }

    vector<int>m1(256,0);
    vector<int>m2(256,0);


    for(int i=0;i<s.size();i++){

        //if the previous positions differ
        if(m1[s[i]]!=m2[s[i]])
            return false;

        //update the index
        m1[s[i]]=i+1;
        m2[t[i]]=i+1;

    }

return true;

}

int main(){

    string s="apple";
    string t="bbnbm"; 
    cout<<isomorphic(s,t)<<" ";
    return 0;


}