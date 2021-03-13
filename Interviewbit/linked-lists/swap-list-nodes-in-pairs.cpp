/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    
    if(A==NULL||A->next==NULL) return A;
    
    ListNode* p=A;
    ListNode* q=A->next;
    
    while(q){
        swap(p->val,q->val);
        if(q->next){
            p=q->next;
            q=q->next->next;
        }else q=q->next;
    }
    return A;
}
