//Problem:Daily Temperatures
//Difficult:Medium
//Concept used-Monotonic Stack-Stack in decreasing order

#include<bits/stdc++.h>
using namespace std;


        vector<int>dailyTemperatures(vector<int>&temperatures){


            int n=temperatures.size();
            vector<int>answer(n,0);
            stack<int>st;

            for(int i=0;i<n;i++){
                while(st.empty()==false && temperatures[i]>temperatures[st.top()]){
                    int prev=st.top();
                    st.pop(); //correct way to write otherwise it will return a void type
                    answer[prev]=i-prev;
                }

                st.push(i);
            }

            return answer;
        }



int main(){

    vector<int>temperatures={73,74,75,71,69,72,76,73};
    vector<int>ans=dailyTemperatures(temperatures);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    
    return 0;

}