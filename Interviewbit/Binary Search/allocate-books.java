public class Solution {
    private boolean isPossible(int midP, int B, ArrayList<Integer>A){
        int count=1;
        int page=0;
        
        for(int i=0;i<A.size();i++){
            if(A.get(i)>midP) return false;
            if(page+A.get(i)>midP){
                count++;
                page=A.get(i);
            }else{
                page+=A.get(i);
            }
        }
        if(count<=B) return true;
        else return false;
    }
    public int books(ArrayList<Integer> A, int B) {
        int minP=0;
        int maxP=0;
        for(int i=0;i<A.size();i++){
            minP=Math.max(minP,A.get(i));
            maxP+=A.get(i);
        }
        if(A.size()<B) return -1;
        int ans=Integer.MAX_VALUE;
        while(minP<=maxP){
            int midP=minP+(maxP-minP)/2;
            
            if(isPossible(midP,B,A)){
                ans=Math.min(ans,midP);
                maxP=midP-1;
            }else{
                minP=midP+1;
            }
        }
        return ans;
    }
}
