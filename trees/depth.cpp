//Problem:Maximum depth of a binary tree
//Difficulty:Easy

#include<bits/stdc++.h>
using namespace std;

struct TreeNode{

    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(): val(0), left(nullptr), right(nullptr){};
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {};
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {};
};

//Note-Here we consider the root node as well if the tree is empty then depth is 0, so use return 0 not return -1
int maxDepth(TreeNode* root){


    if(root==nullptr){
        return 0;
    }
    
    int leftheight=maxDepth(root->left);
    int rightheight=maxDepth(root->right);
    if(leftheight>rightheight){
        return 1+leftheight;
    }
    else{
        return 1+rightheight;
    }


}