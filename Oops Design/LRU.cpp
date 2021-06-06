#include<bits/stdc++.h>
using namespace std;

class LRUCache{
    private:
    	list<int>dq;
    	unordered_map<int,list<int>::iterator>ump;
    	int capacity;
    public:
        LRUCache(int n);
        void refer(int x);
        void display();
    
};

LRUCache::LRUCache(int n){
    capacity=n;
}

void LRUCache:: refer(int x){
    
    if(ump.find(x)==ump.end()){
        if(dq.size()==capacity){
            int last=dq.back();
            dq.pop_back();
            ump.erase(last);
        }
    }else{
        auto it=ump[x];
        dq.erase(it);
        ump.erase(x);
    }
    dq.push_front(x);
    ump[x]=dq.begin();
}

void LRUCache::display(){

    for(auto it=dq.begin();it!=dq.end();it++){
        cout<<*it<<" ";
    }
}

int main(){
    LRUCache ca(4); 
  
    ca.refer(1); 
    ca.refer(2); 
    ca.refer(3); 
    ca.refer(1); 
    ca.refer(4); 
    ca.refer(5); 
    ca.display(); 
}
