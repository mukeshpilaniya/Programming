int Solution::solve(vector<int> &A) {
    int n=A.size();
    int ans=0;
    for(int i=0;i<A.size();i++){
        int leftele=i;
        int rightele=n-i;
        int freq=i*(n-i)+(n-i);
        if(freq%2==0)  continue;
        else{
            ans=ans^A[i];
        }
    }
    return ans;
}
