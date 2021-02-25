#include<bits/stdc++.h>
using namespace std;

bool isPossible(int midP, int B, vector<int>&A){
    int count=1,page=0;
    
    for(int i=0;i<A.size();i++){
        if(A[i]>midP) return false;
        if(page+A[i]>midP){
            count++;
            page=A[i];
        }else{
            page+=A[i];
        }
    }
    if(count<=B) return  true;
    else return false;
}
int Solution::books(vector<int> &A, int B) {
    int minP=*max_element(A.begin(),A.end());
    int maxP=accumulate(A.begin(),A.end(),0);
    int ans=INT_MAX;
    if(A.size()<B) return -1;
    while(minP<=maxP){
        int  midP=minP+(maxP-minP)/2;
        if(isPossible(midP,B,A)){
            ans=min(ans,midP);
            maxP=midP-1;
        }else{
            minP=midP+1;
        }
    }
    return ans;
}
