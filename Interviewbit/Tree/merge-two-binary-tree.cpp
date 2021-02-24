/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::solve(TreeNode* A, TreeNode* B) {
    if(A==NULL&&B==NULL) return NULL;
    if(A==NULL) return B;
    if(B==NULL) return A;
    
    TreeNode* tmp=new TreeNode(0);
    tmp->val=A->val+B->val;
    tmp->left=solve(A->left,B->left);
    tmp->right=solve(A->right,B->right);
    return tmp;
}
