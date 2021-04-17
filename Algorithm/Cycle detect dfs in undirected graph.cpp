/* cycle detection algo
	1.dfs
	2.bfs
	3.disjoint set union
*/

bool dfs(vector<int>adj[], int s, vector<int>&vis, vector<int>&parent ){//vector<int>&parent can be replace with int p
	vis[s]=true;

	for(int i=0;i<adj[s].size();i++){
		if(vis[adj[s][i]]==false){
			parent[adj[s][i]]=s; //remove
			if(dfs(adj,adj[s][i],vis,parent)) return true; //if(dfs(adj,adj[s][i],vis,s)) return true;
		}else if(adj[s][i]!=parent[s]){ //else if(adj[s][i]!=p)
			return true;
		}
	}
	return false;
}

bool isCycle(vector<int>adj[],int v){
	vector<bool>vis(v,false);
	vector<int>parent(v,-1);

	for(int i=0;i<v;i++){
		if(vis[i]==false){
			if(dfs(adj,i,vis,parent)) return true;
		}
	}
	return false;
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