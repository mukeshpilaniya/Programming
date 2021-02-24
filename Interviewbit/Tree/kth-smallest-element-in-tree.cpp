/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int ans=0,flag=1;
 void inorder(TreeNode* root, int &k, int &B){
    if(root==NULL)
        return;
    if(flag)
     inorder(root->left,k,B);
    k++;
    if(k==B){
        flag=0;
        ans=root->val;
        return ;
    }
    if(flag)
     inorder(root->right,k,B);
 }
 
int Solution::kthsmallest(TreeNode* A, int B) {
    int k=0;
    ans=0;
    inorder(A,k,B);
    return ans;
}