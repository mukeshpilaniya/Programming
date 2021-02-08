/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode* A) {
    if(A==NULL) return;
    queue<TreeLinkNode*> q;
    q.push(A);
    TreeLinkNode* tmp;
    
    while(!q.empty()){
        int size=q.size();
        
        for(int i=1;i<=size;i++){
            tmp=q.front();
            q.pop();
            if(i==size){
                tmp->next=NULL;
            }else{
                tmp->next=q.front();
            }
            if(tmp->left) q.push(tmp->left);
            if(tmp->right) q.push(tmp->right);
        }
    }
    return;
}
