/**
 * Definition for singly-linked list.
 * class ListNode {
 *     public int val;
 *     public ListNode next;
 *     ListNode(int x) { val = x; next = null; }
 * }
 */
public class Solution {
    public ListNode reverseList(ListNode A, int B) {
        ListNode prev=null,current=A,next=null;
        int count=0;
        
        while(current!=null &&count<B){
            next=current.next;
            current.next=prev;
            prev=current;
            current=next;
            count++;
        }
        if(next!=null){
            A.next=reverseList(next,B);
        }
        return prev;
    }
}
