int root(int i,vector<int>&parent){

	while(parent[i]!=i){
		i=parent[i];
	}
	return i;
}
bool find(int A, int B, vector<int>&parent){
	return(root(A,parent)==root(B,parent));
}
void unioN(int A, int B, vector<int>&parent, vector<int>&size, int &max_size){

	if(find(A,B,parent)) return;
	int root_A=root(A,parent);
	int root_B=root(B,parent);
	int size_A=size[root_A];
	int size_B=size[root_B];
	if(size_A>size_B){
		parent[root_B]=root_A;
		size[root_A]=size[root_A]+size_B;
		max_size=max(max_size,size[root_A]);
	}else{
		parent[root_A]=root_B;
		size[root_B]=size[root_B]+size_A;
		max_size=max(max_size,size[root_B]);
	}
}

int main(){

	int v,e;//vertex staring from 0
	cin>>v>>e; //v= number of vertex, e=number of edges
	vector<vector<int>>edges(e,vector<int>(2)); //edge from edges[i][0] to edges[i][1];
	for(int i=0;i<e;i++){
		cin>>edges[i][0];
		cin>>edges[i][1];
	}

	vector<int> parent(v), size(v,1);
	for(int i=0,i<v;i++){
		parent[i]=i;
	}
	int max_size=INT_MIN; //maximum size of group
	for(int i=0;i<e;i++){
		unioN(edges[i][0],edges[i][1],parent,size,max_size);
	}
}