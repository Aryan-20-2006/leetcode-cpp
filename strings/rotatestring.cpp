//Problem-Rotate String
//Difficulty-Easy

#include<bits/stdc++.h>
using namespace std;


//Brute Force 
// bool rotateString(string &s, string&goal){

//     if(s.size()!=goal.size())
//         return false;

//     for(int i=0;i<s.size();i++){
//         string rotated=s.substr(i) + s.substr(0,i);

//         if(rotated==goal)
//             return true;

//     }

// return false;

// }

bool rotateString(string &s, string &goal){

    if(s.size()!=goal.size()){
        return false;
    }

    string doubleS=s+s;

    int pos=doubleS.find(goal);
    
    if(pos!=string::npos)
        return true;

return false;

}

int main(){

    string s="abcde";
    string goal="cdeab";
    cout<<rotateString(s,goal)<<" ";
    return 0;

}