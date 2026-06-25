//Sales by match

#include<bits/stdc++.h>
using namespace std;

// int sockMerchant(int n, vector<int> arr){

//     //use an array which stores the count of each sock or hashmap
//     vector<int>freq(101,0); //according to the constraints
//     int count=0;
    

//     for(int i=0;i<n;i++){
//         freq[arr[i]]++;

//         if(freq[arr[i]]%2==0)
//             count++;
//     }

//     return count;

// }

// int main(){

//     int n=7;
//     vector<int>arr={1,2,1,2,1,3,2};
//     cout<<sockMerchant(n,arr)<<"";
//     return 0;


// }

//Counting Valleys
// int countingValleys(int steps, string path){

//     int altitude=0;
//     int valleys=0;

//     for(int i=0;i<path.size();i++){
//         if(path[i]=='U'){
//             altitude+=1;
//         }

//         else
//             altitude-=1;

//         if(path[i]=='U' && altitude==0){
//             valleys++;
//         }

//     }

// return valleys;

// }


// int main(){

//     string path="DDUU";
//     int steps=4;
//     cout<<countingValleys(steps,path)<<" ";
//     return 0;

// }

// int jumpingOnClouds(vector<int>&c){

//     int jumps=0;
//     int i=0;

//     int n=c.size();

//     while(i<n-1){

//         if(i+2<n && c[i+2]==0){
//             i+=2;
//         }
        
//         else{
//             i+=1;
//         }


//         jumps++;
//     }

//     return jumps;
    
// }

// int main(){

//     vector<int>c={0,1,0,0,0,1,0};
//     cout<<jumpingOnClouds(c)<<" ";
//     return 0;

// }

//Repeated String
long repeatedString(string s,long n){

    int count=0;
    int ans;

    for(int i=0;i<s.size();i++){
        
        if(s[i]=='a')
            count++;
    }

    //Instead of repeating the string, how may complete copues of s fit into n
    int completeCopies=n/s.size();

    ans=count*completeCopies;

    int rem=n%s.size();

    //count remaining characters
    for(int i=0;i<rem;i++){
        if(s[i]=='a'){
            ans++;
        }
    }

return ans;
    
}

int main(){

    string s="aba";
    long n=10;
    cout<<repeatedString(s,n)<<" ";
    return 0;

}