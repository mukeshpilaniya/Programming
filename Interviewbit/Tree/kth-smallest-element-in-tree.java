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
    boolean found=false;
    int ans=0,k=0;
    private void solve(TreeNode root,int B){
        if(root==null) return;
        if(found==false)solve(root.left,B);
        k++;
        if(k==B){
            ans=root.val;
            found=true;
            return;
        }
        if(found==false)solve(root.right,B);
    }
    public int kthsmallest(TreeNode A, int B) {
        found=false;ans=0;k=0;
        if(A==null) return -1;
        solve(A,B);
        return ans;
    }
}
