//Number of susbtrings containing all three characters
//Difficulty-Medium

#include<bits/stdc++.h>
using namespace std;

int numberofSubstrings(string s){

    int n=s.size();
    vector<int>lastSeen(3,-1);
    int count=0;

    for(int i=0;i<n;i++){

        lastSeen[s[i]-'a']=i; //every time you iterate, you will update the last seen to the current index
    
        if(lastSeen[0]!=-1 && lastSeen[0]!=-1 && lastSeen[2]!=-1){  //checking if it has all the three characters
            count=count+(1+min({lastSeen[0],lastSeen[1],lastSeen[2]})) ;   //index+1 will return the number of substrings where index is the minimum of all the indices of the three characters
        }
    }

    return count;

}

int main(){

    string s="bbacba";
    cout<<numberofSubstrings(s)<<" ";
    return 0;

}