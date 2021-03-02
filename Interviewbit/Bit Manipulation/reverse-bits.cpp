#include<bits/stdc++.h>
using namespace std;

unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    // bitset<32>bit(A);
    // int l=0,r=31;
    // unsigned int tmp;
    // while(l<r){
    //     tmp=bit[l];
    //     bit[l]=bit[r];
    //     bit[r]=tmp;
    //     l++,r--;
    // }
    // return bit.to_ulong();
    
    unsigned int a=0;
    int count=0;
    while(A!=0){
        a=a<<1;
        if((A&1)==1){
            a=a^1;
        }
        A=A>>1;
        count++;
    }
    return a<<(32-count);
}
