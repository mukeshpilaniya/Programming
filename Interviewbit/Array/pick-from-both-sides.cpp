int Solution::solve(vector<int> &A, int B) {
    
    for(int i=1;i<A.size();i++){
        A[i]+=A[i-1];
    }
    int sum=INT_MIN;
    int n=A.size();
    for(int i=0;i<B;i++){
        sum=max(sum,A[i]+A[n-1]-A[n-(B-i)]);
    }
    return sum;
}
