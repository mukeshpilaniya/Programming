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
    public TreeNode solve(TreeNode A, TreeNode B) {
        if(A==null&& B==null) return null;
        if(A==null) return B;
        if(B==null) return A;
        TreeNode tmp=new TreeNode(0);
        tmp.val=A.val+B.val;
        tmp.left=solve(A.left,B.left);
        tmp.right=solve(A.right,B.right);
        return tmp;
    }
}
