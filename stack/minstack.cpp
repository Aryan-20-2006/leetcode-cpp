//Problem:Min stack;
//Difficulty:Medium



#include<bits/stdc++.h>
using namespace std;


class MinStack{
    vector<int> st;
    vector<int> mn;


public:

    MinStack(){}


    void push(int val){
        st.push_back(val);

        if(mn.empty()){
            mn.push_back(val);
        }

        else{
            mn.push_back(min(val,mn.back()));
        }
       
    }

    void pop(){
        st.pop_back();
        mn.pop_back();
    }

    int top(){
        return st.back();
    }

    int getMin(){
        return mn.back();
    }
};

int main(){
    MinStack obj;
    obj.push(-2);
    obj.push(0);
    int top=obj.top();
    int min=obj.getMin();
    cout<<top<<endl;
    cout<<min<<endl;

    return 0;
}