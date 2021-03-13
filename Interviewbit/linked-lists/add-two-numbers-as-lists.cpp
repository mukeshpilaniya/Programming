/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    if(A==NULL) return B;
    if(B==NULL) return A;
    
    int sum=0,carry=0;
    ListNode *tmp=new ListNode(0);
    ListNode *head=tmp;
    while(A || B || carry){
        sum=(A?A->val:0)+(B?B->val:0)+carry;
        carry=sum/10;
        ListNode* newnode=new ListNode(sum%10);
        tmp->next=newnode;
        tmp=newnode;
        if(A)
            A=A->next;
        if(B)
            B=B->next;
    }
    return head->next;
}
