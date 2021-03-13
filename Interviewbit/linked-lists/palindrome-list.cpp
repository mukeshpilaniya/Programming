/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 ListNode* reverseList(ListNode* head){
     ListNode* NextNode=NULL,*prevNode=NULL;
     
     while(head){
         NextNode=head->next;
         head->next=prevNode;
         prevNode=head;
         head=NextNode;
     }
     return prevNode;
 }
 
int Solution::lPalin(ListNode* A) {
    //find mid point
    ListNode* slowptr=A,*fastptr=A;
    //finding mid of the linked list also usefull when we want to find linked list is even or odd
    while(fastptr!=NULL&&fastptr->next!=NULL){
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;
    }
    
    ListNode* q=reverseList(slowptr);
    ListNode* p=A;
    
    while(p!=NULL&&q!=NULL){
        if(p->val!=q->val) return 0;
        p=p->next;
        q=q->next;
    }
    return 1;
}

