/** input n=6,v=[1,2,5,6,1,2]
	[1,2,5,6,1,2]     6,
	[-,1,4,5,-,1]	  4,
	[-,-,3,4,-,-] 	  2,
	[-,-,-,1,-,-]	  1,
	[-,-,-,-,-,-]	 DONE
**/


#include<bits/stdc++.h>
using namespace std;

std::vector<int> cutTheRod(int n, vector<int>lengths){

	priority_queue<int,vector<int>, greater<int>> pq;

	for(int i=0;i<lengths.size();i++){
		pq.push(lengths[i]);
	}
	vector<int>ans;
	ans.push_back(pq.size());

	while(!pq.empty()){
		int m=pq.top();

		while(!pq.empty() && m==pq.top()){
			pq.pop();
		}
		if(pq.size()!=0) ans.push_back(pq.size());
		vector<int>v;
		while(!pq.empty()){
			v.push_back(pq.top()-m);
			pq.pop();
		}
		for(int i=0;i<v.size();i++){
			pq.push(v[i]);
		}
	}
	return ans;
}

int main(){
	int n;
	cin>>n;
	std::vector<int> v(n);
	for(auto &x:v)
		cin>>x;
	std::vector<int> ans=cutTheRod(n,v);
	for(auto x:ans)
		cout<<x<<" ";
}