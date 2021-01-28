/**
 * Definition for binary tree
 * class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) {
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
