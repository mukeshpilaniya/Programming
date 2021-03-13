/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    if(A==NULL||A->next==NULL) return A;
    int count=0;
    ListNode *p=A,*q=A;
    while(p){
        p=p->next;
        count++;
    }
    B=B%count;
    if(B==0) return A;
    p=A;
    while(B--){
        q=q->next;
    }
    ListNode *r,*s;
    while(p!=NULL&&q!=NULL){
        r=p;
        s=q;
        p=p->next;
        q=q->next;
    }
    s->next=A;
    r->next=NULL;
    return p;
}
