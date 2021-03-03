/**
 * Definition for singly-linked list.
 * class ListNode {
 *     public int val;
 *     public ListNode next;
 *     ListNode(int x) { val = x; next = null; }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode a) {
        ListNode slowPtr=a, fastPtr=a;
        boolean flag=false;
        
        while(fastPtr!=null && fastPtr.next!=null){
            slowPtr=slowPtr.next;
            fastPtr=fastPtr.next.next;
            if(slowPtr==fastPtr){
                flag=true;
                break;
            }
        }
        if(flag==false)return null;
        slowPtr=a;
        while(slowPtr!=fastPtr){
            slowPtr=slowPtr.next;
            fastPtr=fastPtr.next;
        }
        return slowPtr;
    }
}
