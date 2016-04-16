#include <iostream>
#include <vector>
#include <fstream>
#include <set>
#include <map>
#include <algorithm>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <climits>

#define MOD (int)(1e9+7)


typedef long long int lli;
typedef long double ld;
typedef unsigned long long int ull;

using namespace std;
struct  node{
	int visited;
	vector<node *> nbd;
	node *parent;
};
int n;
node **G;
bool cycle(node *current){
	current->visited=true;
	for(int i=0;i<current->nbd.size();i++){
		node *temp=current->nbd[i];
		if(temp!=current->parent){
			if(temp->visited){
				return true;
			}
			else{
				temp->parent=current;
				bool flag=cycle(temp);
				if(flag)
					return true;
			}
		}

	}
	return false;
}
int f(){
	int answer=0;
	for(int i=0;i<n;i++)
		if(!G[i]->visited){
			if(!cycle(G[i]))
				answer+=1;
		}
	return answer;
}

int main(){
	ios_base::sync_with_stdio(false);
	int test=1;
	//cin>>test;
	while(test--){
		cin>>n;
		int e;
		cin>>e;
		G=new node*[n];
		for(int i=0;i<n;i++){
			G[i]=new node;
			G[i]->parent=NULL;
			G[i]->visited=0;
		}
		int a,b;
		for(int i=0;i<e;i++){
			cin>>a>>b;
			a-=1;
			b-=1;
			G[a]->nbd.push_back(G[b]);
			G[b]->nbd.push_back(G[a]);
		}
		cout<<(f())<<endl;
	}
	return 0;
}
