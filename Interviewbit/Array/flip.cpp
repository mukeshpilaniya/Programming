vector<int> Solution::flip(string A) {
    int start=-1,end=-1,i=0,j=0;
    int currentSum=0,maxSum=0;
    
    for(i=0;i<A.size();i++){
        currentSum+=(A[i]=='1')?-1:1;
        
        if(maxSum<currentSum){
            maxSum=currentSum;
            start=j;
            end=i;
        }
        if(currentSum<0){
            currentSum=0;
            j=i+1;
        }
    }
    if(maxSum==0){
        return {};
    }else{
        return {start+1,end+1};
    }
}
