
void dfs(vector<int>adj[], int s, vector<vector<bool>>&vis){
	vis[s]=true;
	//cout<<s<<" ";
	for(int i=0;i<adj[s].size();i++){
		if(vis[adj[s][i]]==false){
			dfs(adj,adj[s][i],vis); //depending on condition change
		}
	}
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
	int startingVertex;
	cin>>startingVertex;
	vector<bool>vis(n,false);
	dfs(adj,s,vis);
	return 0;
}