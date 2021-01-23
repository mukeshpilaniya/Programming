public class Solution {
    public int solve(ArrayList<Integer> A) {
        int ans=Integer.MIN_VALUE;
        int max1,max2;
        for(int i=1;i<A.size();i++){
            max1=Integer.MIN_VALUE;
            max2=Integer.MIN_VALUE;
            
            for(int j=0;j<i;j++){
                if(A.get(i)>A.get(j)){
                    max1=Math.max(max1,A.get(j));
                }
            }
            for(int j=i+1;j<A.size();j++){
                if(A.get(i)<A.get(j)){
                    max2=Math.max(max2,A.get(j));
                }
            }
            if(max1!=Integer.MIN_VALUE && max2!=Integer.MIN_VALUE){
                ans=Math.max(ans,A.get(i)+max1+max2);
            }
        }
        return ans;
    }
}
