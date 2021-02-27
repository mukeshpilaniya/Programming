/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::solve(TreeNode* A) {

    queue<TreeNode*> q;
    int sum=0,maxSum=INT_MIN;
    TreeNode* tmp;
    q.push(A);
    
    while(!q.empty()){
        int size=q.size();
        sum=0;
        for(int i=0;i<size;i++){
            tmp=q.front();
            q.pop();
            sum+=tmp->val;
            if(tmp->left) q.push(tmp->left);
            if(tmp->right) q.push(tmp->right);
        }
        maxSum=max(maxSum,sum);
    }
    return maxSum;
}
