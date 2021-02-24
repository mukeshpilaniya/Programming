/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 queue<TreeNode*>q;
int ans=0;
int burnTreeUntill(TreeNode* root, int B){
    if(root==NULL) return 0;
    if(root->val==B){
        if(root->left) q.push({root->left});
        if(root->right)q.push({root->right});
        return 1;
    }
    
    int a=burnTreeUntill(root->left,B);
    if(a==1){
        int size=q.size();
        
        for(int i=0;i<size;i++){
            auto tmp=q.front();
            q.pop();
            if(tmp->left) q.push(tmp->left);
            if(tmp->right) q.push(tmp->right);
          //  cout<<tmp->val<<" ";
        }
      //  cout<<root->val<<endl;
        if(root->right) q.push(root->right);
        ans++;
        return 1;
    }
    
    int b=burnTreeUntill(root->right,B);
    if(b==1){
        int size=q.size();
        
        for(int i=0;i<size;i++){
            auto tmp=q.front();
            q.pop();
            if(tmp->left) q.push(tmp->left);
            if(tmp->right) q.push(tmp->right);
           // cout<<tmp->val<<" ";
        }
       // cout<<root->val<<endl;
        if(root->left) q.push(root->left);
        ans++;
        return 1;
    }
    return 0;
}

int burnTree(TreeNode* A, int B){
    ans=0;
    burnTreeUntill(A,B);
    while(!q.empty()){
        int size=q.size();
        
        for(int i=0;i<size;i++){
            auto tmp=q.front();
            q.pop();
            if(tmp->left) q.push(tmp->left);
            if(tmp->right) q.push(tmp->right);
          //  cout<<tmp->val<<" ";
        }
       // cout<<endl;
        ans++;
    }
    return ans;
}
int Solution::solve(TreeNode* A, int B) {
    return burnTree(A,B);
}
