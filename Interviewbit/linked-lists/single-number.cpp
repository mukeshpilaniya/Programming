int Solution::singleNumber(const vector<int> &A) {
    int ans=0;
    for(int j=0;j<A.size();j++){
        ans=ans^A[j];
    }
    return ans;
}
