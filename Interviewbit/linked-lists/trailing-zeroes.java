public class Solution {
    public int solve(int A) {
        int count=0;
        while((A&1)==0){
            A=A>>1;
            count++;
        }
        return count;
    }
}
