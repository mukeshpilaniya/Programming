/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    ListNode* slowPtr=A, *fastPtr=A;
    bool flag=false;
    while(fastPtr!=NULL && fastPtr->next!=NULL){
        slowPtr=slowPtr->next;
        fastPtr=fastPtr->next->next;
        if(slowPtr==fastPtr){
            flag=true;
            break;
        }
    }
    if(flag==false) return NULL;
    slowPtr=A;
    while(slowPtr!=fastPtr){
        slowPtr=slowPtr->next;
        fastPtr=fastPtr->next;
    }
    return slowPtr;
}
