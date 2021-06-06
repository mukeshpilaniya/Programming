#include<bits/stdc++.h>
using namespace std;

class Trie{
private:
	unordered_map<char,Trie*>child;
	bool isLast;
	void searchUntill(Trie* curr_node, string s);
public:
	void insert(string s);
	void search(string s);
	Trie(){
		isLast=false;
	}
};
Trie* root= new Trie();

void Trie::insert(string s){
	Trie* p=root;

	for(int i=0;i<s.size();i++){
		if((p->child).find(s[i])==(p->child).end()){
			p->child[s[i]]=new Trie();
		}
		p=p->child[s[i]];
	}
	p->isLast=true;
}

void Trie::searchUntill(Trie* curr_node,string prefix){
	if(curr_node->isLast){
		cout<<prefix<<" ";
	}
	for(auto it=(curr_node->child).begin();it!=(curr_node->child).end();it++){
		searchUntill(it->second,prefix+it->first);
	}
}

void Trie::search(string s){
	Trie* p=root;
	Trie obj;
	string prefix="";
	for(int i=0;i<s.size();i++){
		prefix+=s[i];
		if((p->child).find(s[i])==(p->child).end()){
			cout<<"no suggestion found"<<endl;
			break;
		}
        Trie* curr_node=p->child[s[i]];
		obj.searchUntill(curr_node,prefix);
        cout<<endl;
		p=curr_node;
	}

}

int main(){
	vector<string>S ={"apple","app","aple","orange","oran","people","plus"};
	Trie obj;
	for(int i=0;i<S.size();i++){
		obj.insert(S[i]);
	}
	obj.search("apple");
	obj.search("oran");
	obj.search("px");
}

