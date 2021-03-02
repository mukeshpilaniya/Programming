/**
 * Definition for singly-linked list.
 * class ListNode {
 *     public int val;
 *     public ListNode next;
 *     ListNode(int x) { val = x; next = null; }
 * }
 */
public class Solution {
    private ListNode mergeTwoList(ListNode l1, ListNode l2){
        if(l1==null && l2==null) return null;
        if(l1==null) return l2;
        if(l2==null) return l1;
        
        if(l1.val<=l2.val){
            l1.next=mergeTwoList(l1.next,l2);
            return l1;
        }else{
            l2.next=mergeTwoList(l1,l2.next);
            return l2;
        }
    }
    public ListNode mergeKLists(ArrayList<ListNode> a) {
        while(a.size()>1){
            a.add(mergeTwoList(a.get(0),a.get(1)));
            a.remove(0);
            a.remove(0);
        }
        return a.get(0);
    }
}
