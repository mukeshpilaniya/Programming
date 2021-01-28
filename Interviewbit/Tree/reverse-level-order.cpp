/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 vector<int> reverseOrder(TreeNode* root){
     queue<TreeNode*>q;
     TreeNode* tmp;
     vector<int>v;
     q.push(root);
     while(!q.empty()){
         v.clear();
         int size=q.size();
         for(int i=0;i<size;i++){
            tmp=q.front();
            q.pop();
            if(tmp->right) q.push(tmp->right);
            if(tmp->left) q.push(tmp->left);
            v.push_back(tmp->val);
         }
     }
     reverse(v.begin(),v.end());
     return v;
 }
 
vector<int> Solution::solve(TreeNode* A) {
    
    if(A==NULL) return {};
    return reverseOrder(A);
}
S
