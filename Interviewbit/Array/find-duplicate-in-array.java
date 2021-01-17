public class Solution {
    // DO NOT MODIFY THE ARGUMENTS WITH "final" PREFIX. IT IS READ ONLY
    public int repeatedNumber(final int[] A) {
        HashSet s= new HashSet();
        
        for(int i=0;i<A.length;i++){
            if(s.contains(A[i])){
                return A[i]; 
            }else{
                s.add(A[i]);
            }
        }
        return -1;
    }
}
