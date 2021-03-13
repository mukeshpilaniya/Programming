/**
 * Definition for singly-linked list.
 * class ListNode {
 *     public int val;
 *     public ListNode next;
 *     ListNode(int x) { val = x; next = null; }
 * }
 */
public class Solution {
    public ListNode swapPairs(ListNode A) {
        if(A.next==null) return A;
        ListNode p=A,q=A.next;
        int tmp;
        while(q!=null){
            tmp=p.val;
            p.val=q.val;
            q.val=tmp;
            p=p.next.next;
            if(q.next!=null)q=q.next.next;
            else q=null;
        }
        return A;
    }
}
