//Problem-Capacity to ship packages within D days
//Difficulty-Medium

#include<bits/stdc++.h>
using namespace std;

int maxWeight(vector<int>&weights){

    int maxi=INT_MIN;

    int n=weights.size();

    for(int i=0;i<n;i++){
        maxi=max(maxi,weights[i]);
    }

    return maxi;
}

int Weightsum(vector<int>&weights){

    int sum=0;

    int n=weights.size();

    for(int i=0;i<n;i++){
        sum+=weights[i];
    }

    return sum;

}

int daysRequired(vector<int>&weights, int capacity){

    int days=1;
    int load=0;

    int n=weights.size();

    for(int i=0;i<n;i++){
        if(load+weights[i]>capacity){
            days=days+1; //go to the next day
            load=weights[i]; //start from the next weight
        }
        
        else{
            load+=weights[i];
        }

    }

    return days;

}

int shipWithinDays(vector<int>&weights, int days){

    int low=maxWeight(weights);
    int high=Weightsum(weights);
    int n=weights.size();

    while(low<=high){
        int mid=low+(high-low)/2;

        int no_of_days=daysRequired(weights,mid);

        if(no_of_days<=days){
            high=mid-1; //look for a minimum possible answer
        }

        else{
            low=mid+1;
        }

    }

return low;

}

int main(){

    vector<int>weights={1,2,3,4,5,6,6,7,8,9,10};
    int days=5;
    cout<<shipWithinDays(weights,days)<<" ";
    return 0;

}