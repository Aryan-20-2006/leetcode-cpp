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

int diameterofBinaryTree(TreeNode* root){
    int diameter=0;
    height(root,diameter);
    return diameter;
}

int height(TreeNode* root, int &diameter){ //you need to track the diameter separately as reference or global variable

    if(root==nullptr){
        return 0;
    }

    int left=height(root->left,diameter);
    int right=height(root->right,diameter);

    diameter=max(diameter,left+right);

    return 1+max(left,right); //if and else can also be written


}