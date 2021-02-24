public class Solution {
    int MOD=10000003;
	private boolean isPossible(long midT, int A,int []C){
		int count=1;
		long unit=0;

		for(int i=0;i<C.length;i++){
			if(C[i]>midT) return false;
			if(unit+C[i]>midT){
				count++;
				unit=C[i];
			}else{
				unit+=C[i];
			}
		}
		if(count<=A) return true;
		else return false;
	}

    public int paint(int A, int B, int[] C) {
    	int minT=Integer.MIN_VALUE;
    	int maxT=0;

    	for(int i=0;i<C.length;i++){
    		if(C[i]>minT) minT=C[i];
    		maxT=maxT+(C[i])%MOD;
    	}
        int ans=Integer.MAX_VALUE;
    	while(minT<=maxT){
    	    int midT=minT+(maxT-minT)/2;
    		if(isPossible(midT,A,C)==true){
    			ans=Math.min(ans,midT);
    			maxT=midT-1;
    		}else{
    			minT=midT+1;
    		}
    	}
    	return (int)((ans*(long)B)%MOD);
    }
}
