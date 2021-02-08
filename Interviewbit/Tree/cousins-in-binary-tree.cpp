/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* A, int B) {
    if(A==NULL) return {};
    queue<TreeNode* >q;
    q.push(A);
    TreeNode* tmp;
    bool found=false;
    
    while(!q.empty()&&found==false){
        int size=q.size();
        
        for(int i=0;i<size;i++){
            tmp=q.front();
            q.pop();
            if(tmp->left&&tmp->left->val==B ||tmp->right&&tmp->right->val==B){
                found=true;
            }else{
                if(tmp->left) q.push(tmp->left);
                if(tmp->right) q.push(tmp->right);
            }
        }
    }
    vector<int> ans;
    int size=q.size();
    for(int i=0;i<size;i++){
        ans.push_back(q.front()->val);
        q.pop();
    }
    return ans;
}
