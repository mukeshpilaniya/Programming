/**
 * Definition for singly-linked list.
 * class ListNode {
 *     public int val;
 *     public ListNode next;
 *     ListNode(int x) { val = x; next = null; }
 * }
 */
public class Solution {
    public ListNode deleteDuplicates(ListNode A) {
        ListNode front=A,prev=A, next=A;
        while(next!=null){
            
            while(next!=null && prev.val==next.val){
                next=next.next;
            }
            prev.next=next;
            prev=next;
        }
        return front;
    }
}
