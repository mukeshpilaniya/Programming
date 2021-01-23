int Solution::solve(vector<int> &A) {
    int ans=INT_MIN;
    int max1,max2;
    for(int i=1;i<A.size()-1;i++){
        max1=INT_MIN,max2=INT_MIN;
        for(int j=0;j<i;j++){
            if(A[i]>A[j]){
                max1=max(max1,A[j]);
            }
        }
        for(int j=i+1;j<A.size();j++){
            if(A[i]<A[j]){
                max2=max(max2,A[j]);
            }
        }
        if(max1!=INT_MIN&& max2!=INT_MIN){
            ans=max(ans,A[i]+max1+max2);
        }
    }
    return ans;
}
