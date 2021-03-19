public class Solution {
    public ArrayList<Integer> solve(ArrayList<Integer> A, int B) {
        // Queue<Integer> pq=new PriorityQueue<Collections.reverseOrder()>();
        // pq.addAll(A);
        // ArrayList<Integer> ans=new ArrayList<>();
        // for(int i=0;i<B;i++){
        //     ans.add(pq.poll());
        // }
        // return ans;
        Queue<Integer> pq=new PriorityQueue<>();
        for(int i=0;i<B;i++){
            pq.add(A.get(i));
        }
        for(int i=B;i<A.size();i++){
            if(pq.peek()<A.get(i)){
                pq.poll();
                pq.add(A.get(i));
            }
        }
        ArrayList<Integer> ans=new ArrayList<>();
        while(pq.isEmpty()==false){
            ans.add(pq.poll());
        }
        return ans;
    }
}
