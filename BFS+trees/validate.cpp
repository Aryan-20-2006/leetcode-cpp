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

bool range(TreeNode* root, long minVal, long maxVal){


    if(root==nullptr)  // duh obviously
        return true;

    if(root->val<=minVal || root->val>=maxVal) //checking if its within range
        return false;

    return range(root->left,minVal,root->val) && range(root->right,root->val,maxVal); //left is between minVal and root->val and right is between root->val and maxVal

}


bool isValidBST(TreeNode* root){

    return range(root,LONG_MIN,LONG_MAX); //LONG_MIN and LONG_MAX are the min and max values for long integer
}










bool isValidBST(TreeNode* root){


    


}
