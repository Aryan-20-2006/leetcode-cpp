//Problem:Invert Binary Tree
//Difficult:Easy
//Time Complexity-O(n), Space-O(h)

#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode() : val(0), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


//recursive approach
// TreeNode* invertTree(TreeNode* root){

//     if(root==nullptr){
//         return nullptr;
//     }

//     //recurse first then swap

//     TreeNode* left=invertTree(root->left);
//     TreeNode* right=invertTree(root->right);

//     swap(root->left,root->right);

//     //or swap then recurse
//     // TreeNode* left=invertTree(root->left);
//     // TreeNode* right=invertTree(root->right);

//     // swap(root->left,root->right);


//     return root;

// }

//Second Approach-using level order traversal and queue

TreeNode* invertTree(TreeNode* root){

    if(root==NULL)
        return NULL;

    queue<TreeNode*>q;
    q.push(root);

    while(!q.empty()){
        TreeNode* curr=q.front();
        q.pop();

        swap(curr->left,curr->right);  //or you could do int temp=TreeNode* left, TreeNode* left=TreeNode* right, TreeNode* right=temp
        if(curr->left){
            q.push(curr->left);
        }
        else if(curr->right){
            q.push(curr->right);
        }
    }



}