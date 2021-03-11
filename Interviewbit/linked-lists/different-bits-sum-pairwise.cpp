int Solution::cntBits(vector<int> &A) {
    long long int ans=0,count,n=A.size();
    for(int i=0;i<32;i++){
        count=0;
        for(int j=0;j<A.size();j++){
            if(A[j]&(1<<i)) count++;
        }
        ans=(ans+count*(n-count)*2)%1000000007;
    }
    return ans;
}
