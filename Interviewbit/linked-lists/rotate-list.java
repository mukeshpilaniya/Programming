/**
 * Definition for singly-linked list.
 * class ListNode {
 *     public int val;
 *     public ListNode next;
 *     ListNode(int x) { val = x; next = null; }
 * }
 */
public class Solution {
    public ListNode rotateRight(ListNode A, int B) {
        int count=0;
        ListNode p=A;
        while(p!=null){
           p=p.next;
           count++;
        }
        B=B%count;
        if(B==0) return A;
        p=A;
        count=0;
        while(B>count){
            p=p.next;
            count++;
        }
        ListNode q=A,tmp=A;
        while(p.next!=null){
            p=p.next;
            q=q.next;
        }
        tmp=q.next;
        q.next=null;
        p.next=A;
        return tmp;
        
    }
}
