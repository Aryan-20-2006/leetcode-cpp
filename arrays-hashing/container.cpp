//Problem:Container with ost water
//Difficulty:Medium

/* You have int array height of length n
n vertical lines are drawn 
two points are (i,0) and (i,height[i])
you have to find the two lines that together with x axis form a container
such that the container contains the most water
return the maximum amount of water a container can store

Thought process
- Use the concept of two pointers
- You have to find the max amount of water a container can store
- Which is basically the area
- So the max length should be the max capacity of water that the container can hold
- For eg:- height = [1,8,6,2,5,4,8,3,7]
- Here the output is 49 and not 64 since 8 is not the max length of the container
- Assuming the length and breadth are the same


Correct method
- use two pointers(left and right)
- one pointer is for the 
- in the diagram, if you noitce, the height of the smaller wall is actually the max capcity of the container
- one pointer is for the height of the left wall i.e the larger wall
- other pointer is for the height of the right wall i.e the smaller wall
- so ur height will be the the minimum of the height of right wall and height of the left wall
- for area, we need the width as well , so your width is the distance between two pointers 
- your goal is to find the maximum area
- initially your max Area=0(so it can be compared and updated later)
- also in case if the height of the left wall is lesser than the height of the right wall
- move the left pointer otherwise move right pointer
- one thing to keep in mind- you keep decreasing the width so initially the width is maximum only
- the left pointer currently has a height of 1 and the right pointer is at 7 so min of height is 1
- the width is 8 so your area becomes 8 and then max area updates to 8
- now we're looking for max capacity so its best to keep the right pointer as it is cuz it already has more height
- so u move the left pointer so now ur height becomes 8 
- so min of 7 and 8 is 7 and your width now becomes 7 so area becomes 49 
- so max aread updates yo 49 and anything after this is not updated since ur width keeps decreasing 

*/

/*Time Complexity-O(n)
Space Complexity-O(1)

*/

#include<bits/stdc++.h>
using namespace std;


int maxArea(vector<int>& height){

    int n=height.size();

    int left=0; 
    int right=n-1;

    int maxArea=0;

    while(left<right){
        int minheight=min(height[left],height[right]);
        int area=(right-left)*minheight;

        maxArea=max(maxArea,area);

        if(height[left]<height[right])
            left++;
        else
            right--;



    }

    return maxArea;

}

int main(){

    vector<int>height={1,8,6,2,5,4,8,3,7};
    cout<<maxArea(height)<<endl;
    return 0;


}