int Solution::singleNumber(const vector<int> &A) {
    int n=A.size();
    int count,ans=0;
    for(int i=0;i<32;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(A[j]&(1<<i)) count++;
        }
        if(count%3==1){
            ans=ans+(int)pow(2,i); //important 
        }
    }
    return ans;
}
