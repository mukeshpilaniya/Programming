#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr, int low, int mid, int high){
    int n1=mid-low+1;
    int n2=high-mid;
    int k=low;
    vector<int>temp1(n1),temp2(n2);
    for(int i=0;i<n1;i++){
        temp1[i]=arr[low+i];
    }
    for(int i=0;i<n2;i++){
        temp2[i]=arr[mid+1+i];
    }
    int i=0,j=0;
    k=low;
    
    while(i<n1&&j<n2){
        if(temp1[i]<=temp2[j]){
            arr[k++]=temp1[i++];
        }else{
            arr[k++]=temp2[j++];
        }
    }
    while(i<n1){
        arr[k++]=temp1[i++];
    }
    while(j<n2){
        arr[k++]=temp2[j++];
    }
}

void mergeSort(vector<int>&arr, int low, int high){  //passing arr as a reference
  
    if(low<high){
        int mid=low+(high-low)/2; //To avoid overflow condition
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high); 
        merge(arr,low,mid,high); //merge processer call
    }
}

int main(){
    int length; //size of the array
    cin>>length; 
    vector<int>arr(length); // array declaration
    for(auto &x:arr) //user input 
        cin>>x;
    mergeSort(arr,0,length-1); //merge sort function call
    for(auto x: arr) //arr elements printing
        cout<<x<<" ";
}