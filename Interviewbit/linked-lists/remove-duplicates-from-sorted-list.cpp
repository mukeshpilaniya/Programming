/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    
    ListNode *p=A,*q=A;
    
    while(q!=NULL){
        int value=q->val;
        while(q!=NULL&&q->val==value){
            q=q->next;
        }
        p->next=q;
        p=q;
    }
    return A;
}
