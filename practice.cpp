#include<bits/stdc++.h>
using namespace std;

/*
    struct NewType{
};



*/


//create a struct named Student, representing student's details and store the dataof the student

/*String stream

    vector<int> parseInts(string str){
    
        stringStream ss(str);
        vector<int> result;

        int num;
        char comma;

        while(ss>>num){
            result.push_back(num);
            ss>>comma;

        }

        return result;
    
    
    
    }


*/

// class Sample{
//     private:
//         int val;
//     public:
//         void set(int a){
//             val=a;
//         }

//         int get(){
//             return val;
//         }
// };

class Student{
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
    public:
        void set_age(int a){
            age=a;
        }

        int get_age(){
            return age;
        }

        void set_first_name(char b){
            first_name=b;
        }

        string get_first_name(){
            return first_name;
        }

        void set_last_name(string c){
            last_name=c;
        }

        string get_last_name(){
            return last_name;
        }

        void get_standard(int d){
            standard=d;
        }

        int get_standard(){
            return standard;
        }

    
string to_string_format(){

    stringstream ss;
    ss<<age<<","<<first_name<<","<<last_name<<","<<standard;

    return ss.str();

}

};






