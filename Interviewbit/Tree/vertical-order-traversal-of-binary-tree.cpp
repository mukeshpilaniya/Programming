/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 #define root A
vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {
     if(root==NULL) return {};
    map<int,vector<int> >hash;
    queue<pair<TreeNode*,int>>q;
    q.push({root,0});
    
    while(!q.empty()){
        auto p=q.front();
        q.pop();
        TreeNode *root=p.first;
        int dis=p.second;
        hash[dis].push_back(root->val);
        
        if(root->left)q.push({root->left,dis-1});
        if(root->right)q.push({root->right,dis+1});
    }
    vector<vector<int>>ans;
    for(auto it=hash.begin();it!=hash.end();it++){
        ans.push_back(it->second);
    }
    return ans;
}
