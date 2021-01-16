public class Solution {
    // DO NOT MODIFY THE ARGUMENTS WITH "final" PREFIX. IT IS READ ONLY
    public int maxSubArray(final int[] A) {
        int currentSum=0;
        int maxSum=Integer.MIN_VALUE;
        
        for(int i=0;i<A.length;i++){
            currentSum+=A[i];
            maxSum=Math.max(maxSum,currentSum);
            
            if(currentSum<0){
                currentSum=0;
            }
        }
        return maxSum;
    }
}

