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

vector<vector<int>> levelOrder(TreeNode* root){

    vector<vector<int>>result;

    if(root==NULL)
        return result;

    queue<TreeNode*>q;
    q.push(root);

    while(!q.empty()){

        int levelSize=q.size();//we need to know how many nodes are there so we can group them together
        vector<int> currentLevel;

    for(int i=0;i<levelSize;i++){
        TreeNode* curr=q.front();
        q.pop();


        currentLevel.push_back(curr->val); //Store the value

        if(curr->left)
            q.push(curr->left);
        

        if(curr->right)
            q.push(curr->right);
        
    }

    result.push_back(currentLevel);
}
    
 return result;


}