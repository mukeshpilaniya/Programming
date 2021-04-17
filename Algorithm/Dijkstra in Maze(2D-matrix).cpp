/*  31  100 65  112 18
	10	13	47	157	6
	100	113	174	11	33
	88	124	41	20	140
	99	32	111	41	20
*/

#define pll<int,pair<int,int>>

int shortestPath(vector<vector<int>>grid, int n){
	return dijkstra(grid,0,0,n); //starting from x=0, y=0. to right end of grid
}
bool isSfe(int x,int y, int n){
	if(x<0||x>=n||y<0||y>=n) return false;
	return true;
}
int dijkstra(vector<vector<int>>&grid, int x, int y, int n){

	vector<vector<bool>>vis(n, vector<bool>(n,false));
	vector<vector<int>>dis(n, vector<int>(n,INT_MAX));
	priority_queue<pll,vector<pll>,greater<pll>>pq;
	pq.push({grid[x][y],{x,y}});
	dis[x][y]=grid[x][y];

	int x_dir={0,0,-1,+1};
	int y_dir={-1,+1,0,0};

	while(!pq.empty()){
		x=pq.top().second.first;
		y=pq.top().second.second;
		pq.pop();
		if(vis[x][y]==true) continue;
		vis[x][y]=true;
		for(int k=0;k<4;k++){
			int x1=x+x_dir[k];
			int y1=y+y_dir[k];
			if(isSafe(x1,y1,n)){
				if(vis[x1][y1]==false && dis[x][y]!=INT_MAX && dis[x1][y1]>dis[x][y]+grid[x1][y1]){
					dis[x1][y1]=dis[x][y]+grid[x1][y1];
				}	pq.push({dis[x1][y1],{x1,y1}});
			}
		}
	}
	return dis[n-1][n-1];
}



int main(int argc, char const *argv[])
{	int n;
	cin>>n;
	vector<vector<int>>grid(n,vector<int>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cin>>grid[i][j];
	}
	return 0;
}