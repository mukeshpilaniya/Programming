int Solution::maxSubArray(const vector<int> &A) {
    int currentSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<A.size();i++){
        currentSum+=A[i];
        if(currentSum>maxSum){
            maxSum=currentSum;
        } //maxSum=max(maxSum,currentSum);
        if(currentSum<0){
            currentSum=0;
        }
    }
    return maxSum;
}

