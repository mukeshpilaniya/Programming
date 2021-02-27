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
    public int solve(TreeNode A) {
        Queue<TreeNode >q=new LinkedList<>();
        int maxSum=Integer.MIN_VALUE;
        int sum=0;
        TreeNode tmp;
        q.add(A);
        
        while(!q.isEmpty()){
            int size=q.size();
            sum=0;
            for(int i=0;i<size;i++){
                tmp=q.poll();
                sum+=tmp.val;
                if(tmp.left!=null) q.add(tmp.left);
                if(tmp.right!=null) q.add(tmp.right);
            }
            maxSum=Math.max(sum,maxSum);
        }
        return maxSum;
    }
}
