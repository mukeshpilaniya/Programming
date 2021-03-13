/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    
    ListNode* tail=(ListNode*)malloc(sizeof(ListNode));
    tail->val=INT_MIN;
    tail->next=NULL;
    ListNode *p=A,*q=A,*current=tail;
    int count=0;
    while(q!=NULL){
        count=0;
        p=q;
        while(q!=NULL&&p->val==q->val){
            q=q->next;
            count++;
        }
        if(count==1){
            current->next=p;
            current=p;
        }
    }
    current->next=NULL;
    return tail->next;
}
