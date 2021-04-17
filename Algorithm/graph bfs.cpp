void bfs(vector<int>adj,int s){
	vector<bool>vis(n,false);
	vis[s]=true;
	queue<int>q;
	q.push(s);
	
	while(!q.empty()){
		int tmp=q.top();
		q.pop();
		if(vis[tmp]==true) continue;

		for(int i=0;i<adj[tmp].size();i++){
			if(vis[adj[tmp][i]]==false){
				q.push(adj[tmp][i]);
				vis[adj[tmp][i]]=true;
			}
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