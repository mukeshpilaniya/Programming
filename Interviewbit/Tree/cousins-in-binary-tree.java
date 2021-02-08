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
    public ArrayList<Integer> solve(TreeNode A, int B) {
        if(A==null) return new ArrayList<>();
        Queue<TreeNode> q=new LinkedList<>();
        q.add(A);
        TreeNode tmp;
        boolean found=false; 
        
        while(!q.isEmpty()&&found==false){
            int size=q.size();
            for(int i=0;i<size;i++){
                tmp=q.poll();
                if(tmp.left!=null &&tmp.left.val==B|| tmp.right!=null && tmp.right.val==B){
                    found=true;
                }else{
                    if(tmp.left) q.add(tmp.left);
                    if(tmp.right) q.add(tmp.right);
                }
            }
        }
        
        ArrayList<Integer> ans=new ArrayList<>();
        for(TreeNode it:q){
            ans.add();
        }
        return ans;
    }
}
