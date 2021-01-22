public class Solution {
    public int solve(ArrayList<Integer> A, int B) {
    
        for(int i=0;i<A.size();i++){
            A.set(i,A.get(i)+A.get(i-1));
        }
        int sum=Integer.MAX_VALUE;
        int n=A.size();
        for(int i=0;i<B;i++){
            sum=Math.max(sum,A.get(i)+A.get(n-1)-A.get(n-(B-i)));
        }
        return sum;
    }
}
