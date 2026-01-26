//Problem:Valid Parentheses
//Difficulty:Easy

#include<bits/stdc++.h>
using namespace std;

bool isValid(string s){

    stack<char>st;

    for(char ch:s) //for each character in the string
    {

        if(ch=='(' || ch=='{' || ch=='['){
            st.push(ch);
        }

        else{
            if(st.empty()) 
                return false;
        

        char top=st.top();
        st.pop(); 

        if((ch==')' && top!='(') || (ch=='}' && top!='{') || (ch==']' && top!='[')){
            return false;
        }

    }

    }


    return st.empty(); //if stack is empty, all paranthese are balanced

}

int main(){

    string s="()[]{}";

    if(isValid(s)){
        cout<<"Valid Parentheses"<<endl;
    }

    else
    {
        cout<<"Invalid Parentheses"<<endl;
    }

    return 0;

}