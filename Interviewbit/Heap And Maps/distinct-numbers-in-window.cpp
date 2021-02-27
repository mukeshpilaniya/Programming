vector<int> Solution::dNums(vector<int> &A, int B) {
    int count=0;
    vector<int>ans;
    unordered_map<int,int>ump;
    for(int i=0;i<B;i++){
        ump[A[i]]++;
        if(ump[A[i]]==1) count++;
    }
    ans.push_back(count);

    for(int i=B;i<A.size();i++){
        ump[A[i-B]]--;
        if(ump[A[i-B]]==0) count--;
        ump[A[i]]++;
        if(ump[A[i]]==1) count++;
        ans.push_back(count);
    }
    return ans;
}