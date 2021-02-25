#include<bits/stdc++.h>
using namespace std;

int Solution::sqrt(int A) {

    int i=1;
    while(i<=A/i){
        i++;
    }
    if(i==A/i) return i;
    else return i-1;
}
