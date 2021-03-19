public class Solution {
    public int solve(ArrayList<Integer> A, int B) {
        Queue<Integer>pq=new PriorityQueue<>(Collections.reverseOrder());
        pq.addAll(A);
        int ans=0,tp=0;
        while((B--)!=0){
            tp=pq.poll();
            ans+=tp;
            if((--tp)!=0) pq.add(tp);
        }
        return ans;
    }
}
