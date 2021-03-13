/**
 * Definition for singly-linked list.
 * class ListNode {
 *     public int val;
 *     public ListNode next;
 *     ListNode(int x) { val = x; next = null; }
 * }
 */
public class Solution {
    public ListNode removeNthFromEnd(ListNode A, int B) {
        ListNode p=A;
        int count=0;
        while(B>count){
            count++;
            p=p.next;
            if(p==null) return A.next;
        }
        ListNode prev=A,q=A;
        while(p!=null){
            prev=q;
            q=q.next;
            p=p.next;
        }
        prev.next=q.next; //prev.next=q.next;
        return A;
    }
}
