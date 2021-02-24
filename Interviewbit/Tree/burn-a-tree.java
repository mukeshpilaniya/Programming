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
    Queue<TreeNode> q=new LinkedList<>();
    int ans=0;
    private int burnTreeUntil(TreeNode root, int B){
        if(root==null) return 0;
        if(root.val==B){
            if(root.left!=null) q.add(root.left);
            if(root.right!=null) q.add(root.right);
            return 1;
        }
        int a=burnTreeUntil(root.left,B);
        if(a==1){
            int size=q.size();
            
            for(int i=0;i<size;i++){
                TreeNode tmp=q.poll();
                if(tmp.left!=null) q.add(tmp.left);
                if(tmp.right!=null) q.add(tmp.right);
            }
            ans++;
            if(root.right!=null) q.add(root.right);
            return 1;
        }
        int b=burnTreeUntil(root.right,B);
        if(b==1){
            int size=q.size();
            
            for(int i=0;i<size;i++){
                TreeNode tmp=q.poll();
                if(tmp.left!=null) q.add(tmp.left);
                if(tmp.right!=null) q.add(tmp.right);
            }
            ans++;
            if(root.left!=null) q.add(root.left);
            return 1;
        }
        return 0;
    }
    private int burnTree(TreeNode A, int B){
        ans=0;
        burnTreeUntil(A,B);
    
        while(!q.isEmpty()){
            int size=q.size();
            for(int  i=0;i<size;i++){
                TreeNode tmp=q.poll();
                if(tmp.left!=null) q.add(tmp.left);
                if(tmp.right!=null) q.add(tmp.right);
            }
            ans++;
        }
        return ans;
    }
    
    public int solve(TreeNode A, int B) {
        return burnTree(A,B);
    }
}
