/**
 * Definition for binary tree
 * class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) {/**
 * Definition for binary tree with next pointer.
 * public class TreeLinkNode {
 *     int val;
 *     TreeLinkNode left, right, next;
 *     TreeLinkNode(int x) { val = x; }
 * }
 */
public class Solution {
    public void connect(TreeLinkNode root) {
        if(root==null) return;
        
        Queue<TreeLinkNode> q= new LinkedList<>();
        q.add(root);
        TreeLinkNode tmp;
        
        while(!q.isEmpty()){
            int size=q.size();
            
            for(int i=1;i<=size;i++){
                tmp=q.poll();
                if(i==size){
                    tmp.next=null;
                }else{
                    tmp.next=q.peek();
                }
                if(tmp.left!=null) q.add(tmp.left);
                if(tmp.right!=null) q.add(tmp.right);
            }
        }
        return;
    }
}

 *      val = x;
 *      left=null;
 *      right=null;
 *     }
 * }
 */
public class Solution {
    public ArrayList<Integer> solve(TreeNode A) {
        ArrayList<Integer> ans=new ArrayList<>();
        Queue<TreeNode> q=new LinkedList<TreeNode>();
        TreeNode tmp;
        q.add(A);
        while(!q.isEmpty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                tmp=q.peek();
                q.poll();
                if(tmp.right!=null){
                    q.add(tmp.right);
                }
                if(tmp.left!=null){
                    q.add(tmp.left);
                }
                ans.add(tmp.val);
            }
        }
        Collections.reverse(ans);
        return ans;
    }
}
