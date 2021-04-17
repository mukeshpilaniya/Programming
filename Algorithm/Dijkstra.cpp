
#define pll pair<int,int> //first->vertex, second->weight

void dijkstra(vector<pll>adj[],int v, int s){ //v=number of vertex, s=starting vertex

	vector<int>dis(v,INT_MAX);
	vector<int>parent(v,-1);
	vector<bool>vis(v,false);

	priority_queue<pll,vector<pll>,greater<pll>> pq; //first->weight, second=vertex
	pq.push({0,s});
	dis[s]=0;
	
	while(!pq.empty()){
		int u=pq.top().second;
		pq.pop();

		if(vis[u]==true) continue;
		vis[u]=true;

		for(int i=0;i<adj[u].size();i++){
			int w=adj[u][i].first;
			int v=adj[u][i].second;
			if(vis[v]==false){
				if(dis[u]!=INT_MAX && dis[v]>dis[u]+w){
					parent[v]=u;
					dis[v]=dis[u]+w;
					pq.push({dis[v],v});
				}
			}
		}
	}
}


int main(){
	int v,e; //vertex starting from 0;
	cin>>v>>e;
	vector<pll>adj[v]; //adjency list  impl 
	//vector<pll>adj[] can be replaced by unordered_map<int,vector<pll>>adj;
	for(int i=0;i<e;i++){
		int u,v,w;
		cin>>u>>v>>w;
		adj[u].push_back({v,w});
		adj[v].push_back({u,w});
	}
	int starting_vertex;
	cin>>starting_vertex;
	dijkstra(adj,v,starting_vertex);
}