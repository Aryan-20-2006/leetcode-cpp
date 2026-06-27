//Problem-Array:Left Rotation
//Difficulty:Easy

#include<bits/stdc++.h>
using namespace std;


//d refers to the number of rotations
vector<int> rotLeft(vector<int> a, int d){

    vector<int>temp(d); //creating a temp array of size d

    int n=a.size();

    //putting the elements of a into temp
    for(int i=0;i<d;i++){
        temp[i]=a[i];
    }

    //shifting takes place at the dth index
    for(int i=d;i<n;i++){
        a[i-d]=a[i];
    }

    //putting back temp in the array a
    for(int i=n-d;i<n;i++){
        a[i]=temp[i-(n-d)];
    }

return a;

}

int main(){

    vector<int>a={1,2,3,4,5};
    int d=4;
    vector<int>result=rotLeft(a,d);

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

    return 0;

}
