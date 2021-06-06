#include<bits/stdc++.h>
using namespace std;

struct Heap{
	int *arry;
	int count; // number of elements in heap
	int capacity; //size of the heap
};

int getMaximum(Heap *root){
	if(root->count==0) return -1; //default
	return (root->arry[0]);
}

int leftChild(struct Heap *root, int i){
	int left=2*i+1;
	//cout<<left<<" "<<root->count<<" ";
	if(left>(root->count)){
		return -1; //left not exits
	}else
		return left;
}

int rightChild(struct Heap *root, int i){
	int right=2*i+2;
	//cout<<right<<" "<<root->count<<" ";
	if(right>	(root->count)){
		return -1; //right not exits
	}else
		return right;
}

void heapify(struct Heap *root, int i){
	int l,r,max,temp;
	l=leftChild(root,i);
	r=rightChild(root,i);
	
	if(l!=-1 && root->arry[l]> root->arry[i])
		max=l;
	else 
		max=i;
	if(r!=-1 && root->arry[r]> root->arry[max])
		max=r;
	if(max!=i){
		temp=root->arry[i];
		root->arry[i]=root->arry[max];
		root->arry[max]=temp;
		heapify(root,max);
	}
	
}

int deleteElement(struct Heap *root){

	int data;
	if(root->count==0) return -1; //default 
	data=root->arry[0];
	root->arry[0]=root->arry[root->count-1];
	root->count--;
	heapify(root,0);
	return data;
}

int insert(struct Heap *root, int data){
	int i;
	root->count++;
	i=root->count-1;
	bool iszero=false;
	
	while(i>=0 && data > root->arry[(i-1)/2]){
		if(i==0 && iszero==true) break; 
		else if(i==0){
			iszero=true;
		}
		root->arry[i]=root->arry[(i-1)/2];
		i=(i-1)/2;
	}
	root->arry[i]=data;
    return data;
}


struct Heap *createHeap(int capacity){
	struct Heap *root=(struct Heap*) malloc(sizeof(struct Heap));
	if(root==NULL){
		cout<<"memory error";
		return NULL;
	}
	root->count=0;
	root->capacity=capacity;
	root->arry=(int *)malloc(sizeof(int)*capacity);
	if(root->arry==NULL){
		cout<<"memory error";
		return NULL;
	}
	return root;
}

int main(){
	 struct Heap *root=createHeap(20); //create heap with initial capacity
	 insert(root,14); //insert 14 into heap
	 cout<<getMaximum(root)<<endl; 
	 insert(root,2); //insert 14 into heap
	 cout<<getMaximum(root)<<endl; // get maximum elements from heap
	 insert(root,15); //insert 15 into heap
	 insert(root,7); //insert 7 into heap
	 cout<<getMaximum(root)<<endl; //get maximum element from heap
	 deleteElement(root);  //delete root of heap
	 cout<<getMaximum(root)<<endl;
	 deleteElement(root); //delete root of tree
	 insert(root,-15); //insert -15 into heap
	 insert(root,6); //insert 6 into heap
	 insert(root,12); //insert 12 into heap

	 cout<<getMaximum(root)<<endl; // get maximum elements from heap
}