


vector<vector<int>> levelOrder(TreeNode* root){

    vector<vector<int>>result;

if(root==NULL){
    return result;
}

queue<TreeNode*> q;
q.push(root);

while(!q.empty()){

    int levelSize=q.size();
    vector<int> level;


    for(int i=0;i<levelSize;i++){
        TreeNode* curr=q.front();
        q.pop();

        level.push_back(curr->val);

        if(curr->left)
            q.push(curr->left);

        if(curr->right)
            q.push(curr->right);
        
    }

    return result.push_back(level);

}


return result;






}