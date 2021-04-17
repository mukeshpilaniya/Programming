/* cycle detection in directed algo
	1.dfs
	2.topologicalSort
*/

bool topologicalSort(vector<int>adj[], int v){
	int nodeCount=0;
	vector<int>indeg(v,0);
	for(int i=0;i<v;i++){
		for(int j=0;j<adj[i].size();j++){
			indeg[adj[i][j]]++;
		}
	}
	queue<int>q;
	for(int i=0;i<v;i++){
		if(indeg[i]==0) q.push(i);
	}

	while(!q.empty()){
		int tmp=q.top();
		q.pop();
		nodeCount++;
		for(int i=0;i<adj[tmp].size();i++){
			indeg[adj[tmp][i]]--;
			if(indeg[adj[tmp][i]]==0) q.push(adj[tmp][i]);
		}
	}
	if(nodeCount<v) return true;
	return false;
}

bool isCycle(vector<int>adj[],int v){
	return topologicalSort(adj,v);
}

int main(int argc, char const *argv[])
{
	int n; //starting from 0
	cin>>n;
	vector<int>adj[n]; //

	for(int i=0;i<n;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	cout<<isCycle(adj,n);
	return 0;
}