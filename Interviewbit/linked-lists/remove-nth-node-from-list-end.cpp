/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode *p=A,*q=A;
    while(B--){
        q=q->next;
        if(q==NULL) return A->next;
    }
    ListNode* r=A;
    while(q!=NULL){
        r=p;
        p=p->next;
        q=q->next;
    }
    r->next=p->next;
    delete(p);
    return A;
}
