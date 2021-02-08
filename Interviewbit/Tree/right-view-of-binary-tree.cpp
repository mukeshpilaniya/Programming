/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* A) {
    if(A==NULL) return {};
    queue<TreeNode*> q;
    q.push(A);
    TreeNode* tmp;
    vector<int> ans;
    while(!q.empty()){
        int size=q.size();
        
        for(int i=1;i<=size;i++){
            tmp=q.front();
            q.pop();
            if(i==size){
                ans.push_back(tmp->val);
            }
            if(tmp->left) q.push(tmp->left);
            if(tmp->right) q.push(tmp->right);
        }
    }
    return ans;
}
