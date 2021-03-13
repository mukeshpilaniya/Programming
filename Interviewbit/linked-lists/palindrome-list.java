/**
 * Definition for singly-linked list.
 * class ListNode {
 *     public int val;
 *     public ListNode next;
 *     ListNode(int x) { val = x; next = null; }
 * }
 */
public class Solution {
    private ListNode reverseList(ListNode A){
        ListNode prev=null,current=A,next=null;
        
        while(current!=null){
            next=current.next;
            current.next=prev;
            prev=current;
            current=next;
        }
        return prev;
    }
    public int lPalin(ListNode A) {
        ListNode slowPtr=A, fastPtr=A;
        
        while(fastPtr!=null && fastPtr.next!=null){
            slowPtr=slowPtr.next;
            fastPtr=fastPtr.next.next;
        }
        
        ListNode mid=reverseList(slowPtr);
        slowPtr=null;
        slowPtr=A;
        while(slowPtr!=null && mid!=null){
            if(slowPtr.val!=mid.val) return 0;
            slowPtr=slowPtr.next;
            mid=mid.next;
        }
        return 1;
    }
}
