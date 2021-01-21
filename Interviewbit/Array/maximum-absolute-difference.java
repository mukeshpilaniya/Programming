public class Solution {
    public int maxArr(ArrayList<Integer> A) {
        int min1=Integer.MAX_VALUE,min2=Integer.MAX_VALUE;
        int max1=Integer.MIN_VALUE, max2=Integer.MIN_VALUE;
        
        if(A.size()==0) return 0;
        for(int i=0;i<A.size();i++){
            min1=Math.min(min1,A.get(i)+i);
            max1=Math.max(max1,A.get(i)+i);
            min2=Math.min(min2,A.get(i)-i);
            max2=Math.max(max2,A.get(i)-i);
        }
        return Math.max(max1-min1,max2-min2);
    }
}
