
int x_dir[]={1,-1,0,0};
int y_dir[]={0,0,-1,+1};

bool isSafe(int x, int y, int n, int m,vector<vector<bool>>&vis){
	if(x<0||x>=n ||y<0||y>=m) return false;
	if(vis[x][y]==true) return false;
	return true;
}

void dfs(vector<vector<int>>&grid, int x, int y,int &n, int &m,vector<vector<bool>>&vis){
	vis[x][y]=true;

	for(int k=0;k<4;k++){
		int x1=x+x_dir[k];
		int y1=y+y_dir[k];
		if(isSafe(x1,y1,n,m,vis)){
			dfs(x1,y1,n,m,vis);// change conditions according to question
		}
	}
}

int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<int>>grid(n,vector<int>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>grid[i][j];
		}
	}
}