public class Solution {
    public int sol(int x, int nx, int y, int ny){
        int dx=Math.abs(nx-x);
        int dy=Math.abs(ny-y);
        return Math.max(dx,dy);
    }
    
    public int coverPoints(ArrayList<Integer> A, ArrayList<Integer> B) {
        int ans=0;
        for(int i=0;i<A.size()-1;i++){
            ans+=sol(A.get(i),A.get(i+1),B.get(i),B.get(i+1));
        }
        return ans;
    }
}
