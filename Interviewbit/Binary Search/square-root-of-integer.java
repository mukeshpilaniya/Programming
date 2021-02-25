public class Solution {
    public int sqrt(int A) {
    	int i=1;
    	while(i<=A/i){
    		i++;
    	}
    	return i-1;
    }
}
