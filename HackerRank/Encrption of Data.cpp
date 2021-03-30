https://leetcode.com/discuss/interview-question/1087974/D.E.Shaw-OA-Test-or-Hackerrank


//code not completed
#include <bits/stdc++.h>
using namespace std;

vector<int> solve(string s,int q, vector<int>l, vector<int>r){
	int len=s.size();
	if(len==0) return 0;

	vector<int>prefix(len+1);
	prefix[0]=0;
	for(int i=1;i<s.size();i++){
		if(s[i]>='a'&&s[i]<='z'){
			prefix[i]=1+prefix[i-1];
		}else{
			if()
			prefix[i]=(s[i]-'0')+prefix[i-1]-1;
		}
	}
	vector<int>ans;
	for(int i=0;i<q;i++){
		int leftIndex=[i];
		int rightIndex=r[i];
		ans.push_back(prefix[leftIndex-1]-prefix[rightIndex]);
	}
	return ans;
}


int main(){
	string s;
	cin>>s;
	int q;
	cin>>q;
	vector<int>l(q),r(q);
	for(int i=0;i<q;i++){
		cin>>l[i]>>r[i];
	}
	cout<<solve(s,q,l,r);
}