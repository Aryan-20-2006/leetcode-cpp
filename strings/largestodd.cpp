//Problem-Largest odd number in a string
//Difficulty-Easy

#include<bits/stdc++.h>
using namespace std;

string largeOddNum(string &s){

   int n=s.size();
   int ind=-1; //this index has to be updated so initially its empty

    //checking for the largest odd number and we're starting from the right
   for(int i=n-1;i>=0;i--){
        if((s[i]-'0')%2==1){
            ind=i;
            break; //come out of the loop (cuz we need longest)
        }

   }

   //ignoring leading zeroes
   int i=0;
   while(i<=ind && s[i]=='0'){
        i++;
   }

   return s.substr(i,ind-i+1);

}

int main(){

    string s="54376";
    cout<<largeOddNum(s)<<" ";
    return 0;

}