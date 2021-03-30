/**
	n=15,m =7, endLength=[4,9],[4,12],[2,4],[3,5],[8,11],[1,4],[5,9]
**/

int mostVisit(int n, int m, vector<int> startLength,vector<int> endLength){
	vector<pair<int,int>>arr(100005);

	for(int i=0;i<startLength.size()-1;i++){
		arr[startLength[i]].first++;
		arr[endLength[i]].second++;
	}
	vector<int>ans(100005);
	for(int i=1;i<arr.size();i++){
		ans[i]=ans[i-1]+arr[i].first-arr[i-1].second;
	}

	return max_element(ans.begin(),ans.end())-ans.begin();
}

int  main(){
	int n,m;
	cin>>n>>m;
	vector<int> startLength(m),endLength(m);
	for(int i=0;i<m;i++){
		cin>>startLength[i];
		cin>>endLength[i];
	}

	cout<<mostVisit(n,m,startLength,endLength);
}