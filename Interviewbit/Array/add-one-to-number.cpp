vector<int> Solution::plusOne(vector<int> &A) {
    
    while(!A.empty()&&A[0]==0){
        A.erase(A.begin());
    }
    while(A.empty()){
        return {1};
    }
    int len=A.size();
    for(int i=len-1;i>=0;i++){
        if(A[i]+1>9){
            A[i]=0;
        }else{
            A[i]++;
            break;
        }
    }
    if(A[0]==0){
        A.insert(A.begin(),1);
        return A;
    }else{
        return A;
    }
    
}
