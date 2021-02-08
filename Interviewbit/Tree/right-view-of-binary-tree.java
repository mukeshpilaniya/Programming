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
        if(A==null) return new ArrayList<>();
        
        TreeNode tmp;
        Queue<TreeNode> q=new LinkedList<>();
        q.add(A);
        ArrayList<Integer> ans=new ArrayList<>();
        
        while(!q.isEmpty()){
            int size=q.size();
            for(int i=1;i<=size;i++){
                tmp=q.poll();
                if(i==size){
                    ans.add(tmp.val);
                }
                if(tmp.left!=null) q.add(tmp.left);
                if(tmp.right!=null) q.add(tmp.right);
            }
        }
        return ans;
    }
}
