int sol(int x,int nx, int y, int ny){
    int dx=abs(nx-x);
    int dy=abs(ny-y);
    
    return max(dx,dy);
}
int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int ans=0;
    for(int i=0;i<A.size()-1;i++){
        ans+=sol(A[i],A[i+1],B[i],B[i+1]);
    }
    return ans;
}
