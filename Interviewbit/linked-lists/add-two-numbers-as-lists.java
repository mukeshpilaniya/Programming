/**
 * Definition for singly-linked list.
 * class ListNode {
 *     public int val;
 *     public ListNode next;
 *     ListNode(int x) { val = x; next = null; }
 * }
 */
public class Solution {
    public ListNode addTwoNumbers(ListNode A, ListNode B) {
        int carry=0,sum=0;
        ListNode tmp=new ListNode(0);
        ListNode head=tmp;
        while(A!=null || B!=null|| carry!=0){
            sum=(((A!=null)?A.val:0)+((B!=null)?B.val:0)+carry);
            carry=sum/10;
            ListNode newnode=new ListNode(sum%10);
            tmp.next=newnode;
            tmp=tmp.next;
            if(A!=null) A=A.next;
            if(B!=null) B=B.next;
        }
        return head.next;
    }
}
