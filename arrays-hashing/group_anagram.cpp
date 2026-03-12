/*Group Anangrams

Group the anagrams togetehr
eg:- strs=["eat","tea","ate","nat","tan","bat"]

[bat],[ate,tea,eat],[nat,tan]


*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs){

      //if its an empty string or a single string it will return itself
      
      
      //if it is true then group it together

      
    unordered_map<string,vector<string>>mp;

    //character counting
      for(int i=0;i<strs.size();i++){

        vector<int>count(26,0);


        for(int j=0;j<strs[i].size();j++){
            count[strs[i][j]-'a']++;
        }
    
      //building key
        string key="";
      for(int k=0;k<26;k++){
        key+=to_string(count[k])+"#"; //converting the number to a string

        

      }


      //store word in map
      mp[key].push_back(strs[i]);
    }

      vector<vector<string>>result;

      //collect results;

      for(pair<const string, vector<string>>p:mp){
        result.push_back(p.second);
      }

      return result;

}

int main(){


    vector<string>strs={"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>>result=groupAnagrams(strs);

    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<endl;
        }

        cout<<endl;
    }

    return 0;





}