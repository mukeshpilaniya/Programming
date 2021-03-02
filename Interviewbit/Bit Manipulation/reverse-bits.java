public class Solution {
	public long reverse(long a) {
	    long b=0;
	    int count=0;
	    while(a!=0){
	        b=b<<1;
	        if((a&1)==1){
	            b=b^1;
	        }
	        a=a>>1;
	        count++;
	    }
	    return b<<(32-count);
	}
}
