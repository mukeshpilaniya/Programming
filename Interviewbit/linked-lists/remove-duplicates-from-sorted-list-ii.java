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
        
        ListNode dummy=new ListNode(Integer.MAX_VALUE);
        ListNode front=dummy,prev=A, rear=A;
        int count=0;
        while(rear!=null){
            count=0;
            while(rear!=null && prev.val==rear.val){
                rear=rear.next;
                count++;
            }
            if(count==1){
                front.next=prev;
                front=front.next;
            }
            prev=rear;
        }
        front.next=null;
        return dummy.next;
    }
}
