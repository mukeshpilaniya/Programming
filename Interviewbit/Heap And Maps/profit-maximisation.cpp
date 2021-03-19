int Solution::solve(vector<int> &A, int B) {
    
    priority_queue<int>pq;
    for(int i=0;i<A.size();i++)
        pq.push(A[i]);
        
    int ans=0;
    int tp=0;
    while(B--){
        tp=pq.top();
        pq.pop();
        ans+=tp;
        if(--tp)pq.push(tp);
    }
    return ans;
}
