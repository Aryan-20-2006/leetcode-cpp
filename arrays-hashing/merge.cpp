//Problem:Merge Sorted Arrays
//Difficulty:Easy

/*
you have two arrays nums1 and nums2 
nums1 has a length of m
nums2 has a length of n
you have to merge both arrays into a single array
the final sorted array should be stored inside nums1
in this case, nums1 has a size of m+n
here m means the elements that should be merged
and the last n elements are set to 0, so while merging those zeroes should be ignored

My thought process-u have two lists
1.iterate through the first list
2.once the pointer reaches the end, it points to the first element of the next list
3.then push back the result into nums1

if I were to have two pointers
for the first array, one pointer at the start and one at the end
move the left pointer and right pointer after ignoring the zeroes?
why have they given n in the function call?
also in the result after merging, the elements are in ascending order
so comparisions should be made between the elements of both the arrays

*/

#include<bits/stdc++.h>
using namespace std;

// void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){

// /*This Solution gets rid of the extra space instead of using a separate array to store the merged elements

// eg;-[1,3,5,7] and [0,2,6,8,9]
// the left pointer points to 7 and the right pointer points to 0
// every time you compare each element, you move the left pointer to the left i.e left--
// and right--
// if a comparison like eg:- 7 and 0 you swap them so 0 comes in place of 7 and 7 goes to the second array
// but this method is a bit slower compared to the one on leetcode even though it doesnt use extra space

// */



// int left=n-1; //for the first array, one pointer starts from the end
// int right=0;

// while(left>=0 && right<m){
//     if(nums1[left]>nums2[right]){
//         swap(nums1[left],nums2[right]);
//         left--;
//         right++;
//     }

//     else{
//         break; //in case if its already sorted then ignore it
//     }

// }

//     sort(nums1.begin(),nums1.end());
//     sort(nums2.begin(),nums2.end());

// }

//Leetcode method-best method
void merge(vector<int>&nums1, int m, vector<int>&nums2, int n){
    int i=n-1; //last valid element in nums1
    int j=m-1; //last element in nums2
    int k=n+m-1; //last index of nums1

    while(i>=0 && j>=0){
        if(nums1[i]>nums2[j]){ //put the bigger element in the back
            nums1[k]=nums1[i];
            i--,k--;
        }
        else{
            nums1[k]=nums2[j];
            j--;k--;
        }
        
    }

    while(j>=0){//if there are any leftover elements in nums2, copy them
        nums1[k]=nums2[j];
        j--;k--;
    }
    

}

/*gap method-much better solution
int gap=ceil((m+n/2))


*/
