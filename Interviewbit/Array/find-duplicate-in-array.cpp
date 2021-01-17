int Solution::repeatedNumber(const vector<int> &A) {
    if(A.size()<2) return -1;
    vector<int>B=A;
    sort(B.begin(),B.end());
    for(int i=1;i<B.size();i++){
        if(B[i]==B[i-1]){
            return B[i];
        }
    }
    return -1;
}
