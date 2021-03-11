#include<bits/stdc++.h>
using namespace std;

int Solution::solve(int A) {
    // int ans=0;
    // auto b=bitset<32>(1);
    // for(int i=1;i<=A;i++){
    //     bitset<32>b(i);
    //     ans+=b.count();
    // }
    // return ans;
    int count=0;
    for(int i=0;i<32;i++){
        for(int j=1;j<=A;j++){
            if(j&(1<<i))count++;
        }
    }
    return count;
}
