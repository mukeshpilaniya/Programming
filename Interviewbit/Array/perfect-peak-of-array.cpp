int Solution::perfectPeak(vector<int> &A) {
    int len=A.size();
    if(len==0) return 0;
    vector<int>prefix(len),suffix(len);
    prefix[0]=0,suffix[len-1]=len-1;
    
    for(int i=1;i<A.size();i++){
        if(A[i]>A[prefix[i-1]]){
            prefix[i]=i;
        }else{
            prefix[i]=prefix[i-1];
        }
    }
    for(int i=len-2;i>=0;i--){
        if(A[i]<A[suffix[i+1]]){
            suffix[i]=i;
        }else{
            suffix[i]=suffix[i+1];
        }
    }
    for(int i=1;i<len-1;i++){
        if(prefix[i]==suffix[i]&&(A[i]>A[i-1]&&A[i]<A[i+1])){
            return 1;
        }
    }
    return 0;
}
