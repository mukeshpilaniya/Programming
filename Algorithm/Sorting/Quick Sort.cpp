#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr, int low, int high){
    int pivot=arr[high];
    int i=low-1,j=0;
    
    for(j=low;j<high;j++){
        if(arr[j]<=pivot){
            swap(arr[++i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void quickSort(vector<int>&arr,int low, int high){ //T(n)=2T(n/2)+O(n)
    if(low<high){
        int mid=partition(arr,low,high); //O(n)
        quickSort(arr,low,mid-1); //T(n/2)
        quickSort(arr,mid+1,high); //T(n/2)
    }
}

int main(){
    int length;
    cin>>length;
    vector<int>arr(length);
    for(auto &x:arr)
        cin>>x;
    quickSort(arr,0,length-1);
    
    for(auto x:arr)
        cout<<x<<" ";
}