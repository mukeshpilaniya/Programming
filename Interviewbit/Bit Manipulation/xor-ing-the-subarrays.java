public class Solution {
    public int solve(ArrayList<Integer> A) {
        int ans=0;
        int n=A.size();
        for(int i=0;i<n;i++){
            int left=i;
            int right=n-i;
            int freq=i*(n-i)+(n-i);
            if(freq%2!=0){
                ans=ans^A.get(i);
            }
        }
        return ans;
    }
}
