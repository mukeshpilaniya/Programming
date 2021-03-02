/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 ListNode* mergeTwoList(ListNode *l1, ListNode* l2){
     if(l1==NULL && l2==NULL) return NULL;
     if(l1==NULL) return l2;
     if(l2==NULL) return l1;
     
     if(l1->val<=l2->val) {
         l1->next=mergeTwoList(l1->next,l2);
         return l1;
     }else{
         l2->next=mergeTwoList(l1,l2->next);
         return l2;
     }
 }
 
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    while(A.size()!=1){
        A.push_back(mergeTwoList(A[0],A[1]));
        A.erase(A.begin());
        A.erase(A.begin());
    }
    return A.front();
}
