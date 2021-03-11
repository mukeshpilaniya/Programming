public class Solution {
    public int findMinXor(int[] A) {
        Arrays.sort(A);
        int min_xor=Integer.MAX_VALUE;
        for(int i=0;i<A.length-1;i++){
            min_xor=Math.min(min_xor,A[i]^A[i+1]);
        }
        return min_xor;
    }
}
