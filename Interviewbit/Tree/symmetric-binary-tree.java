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
    public boolean solve(TreeNode A, TreeNode B){
        if(A==null && B==null) return true;
        if(A!=null && B==null ||A==null &&B!=null) return false;
        if(A.val!=B.val) return false;
        return (solve(A.left,B.right) && solve(A.right,B.left));
    }
    
    public int isSymmetric(TreeNode A) {
        if(A==null) return 1;
        if(solve(A.left,A.right)) return 1;
        else return 0;
    }
}
