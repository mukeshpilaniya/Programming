/* cycle detection in undirectedgrpah algo
	1.dfs
	2.bfs
	3.disjoint set union
*/

bool bfs(vector<int>adj[],int s, vector<bool>&vis,vector<int>&parent){
	vis[s]=true;
	queue<int>q;
	q.push(s);

	while(!q.empty()){
		int tmp=q.top();
		q.pop();
		for(int i=0;i<adj[tmp].size();i++){
			if(vis[adj[tmp][i]]==false){
				parent[adj[tmp][i]]=tmp;
				vis[adj[tmp][i]]=true;
				q.push(adj[tmp][i]);
			}else if(adj[tmp][i]!=parent[tmp]){
				return true;
			}
		}
	}
	return false;
}

bool isCycle(vector<int>adj[],int v){
	vector<bool>vis(v,false);
	vector<int>parent(v,-1);

	for(int i=0;i<v;i++){
		if(vis[i]==false){
			if(bfs(adj,i,vis,parent)) return true;
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