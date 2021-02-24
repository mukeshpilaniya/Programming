#include<bits/stdc++.h>
using namespace std;
#define ll long long
int const MOD=10000003;

bool isPossible(ll midT, int A, vector<int>&c){
    int count=1,unit=0;
    for(int i=0;i<c.size();i++){
        if(c[i]>midT) return false;
        if(unit+c[i]<=midT){
            unit+=c[i];
        }else{
            count++;
            unit=c[i];
        }
    }
    if(count<=A){
        return true;
    }else{
        return false;
    }
}

int Solution::paint(int A, int B, vector<int> &C) {
    ll minT=*max_element(C.begin(),C.end())%MOD;
    ll maxT=accumulate(C.begin(),C.end(),0)%MOD;
    ll ans=INT_MAX;
    while(minT<=maxT){
        ll midT=(minT+maxT)/2;
        if(isPossible(midT,A,C)){
            ans=min(ans,midT);
            maxT=midT-1;
        }else{
            minT=midT+1;
        }
    }
    return (ans*B)%MOD;
}
