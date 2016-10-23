#include <bits/stdc++.h>
using namespace std;
typedef pair<long,int> ii;

struct edge{
	int id;
	int c;
	long w;
};

struct node{
	int id;
	vector<edge> e;
	node *parent;
	int p_c;
	long d;		//cost of reaching there
};

node *g;
int n;

struct cmp{
	bool operator()(const ii & a, const ii &b)const{
		if(a.first != b.first)
			return a.first > b.first;
		else return a.second < b.second;
	}
};


void dijkstra(int s){
	priority_queue<ii, vector<ii>, cmp > q;
	bool v[n];
	for(int i=0;i < n; ++i){
		v[i] = false;
		if(i != s){
            g[i].d = LONG_MAX;
			q.push(make_pair(LONG_MAX,i));
		}
		else{
            g[i].d = 0;
            q.push(make_pair(0,s));
		}
	}

	while(!q.empty()){
		ii temp = q.top();
		q.pop();
		if(v[temp.second])
			continue;
		else v[temp.second] = true;
		for(int i=0; i < g[temp.second].e.size(); ++i){
			if(v[g[temp.second].e[i].id])
				continue;
			if( g[temp.second].d + g[temp.second].e[i].w < g[g[temp.second].e[i].id].d ){
				if(g[temp.second].p_c != g[temp.second].e[i].c || temp.second == s){
					g[g[temp.second].e[i].id].d = g[temp.second].d + g[temp.second].e[i].w;
					int index = g[temp.second].e[i].id;
					int n_c = g[g[temp.second].e[i].id].d;
					g[g[temp.second].e[i].id].p_c = g[temp.second].e[i].c;
					q.push(make_pair(n_c,index));
				}
			}
		}
	}

}



int main(){
    cin>>n;
    int m;
    int c;
    cin>>m>>c;
    int u,v,w;
    g = new node[n];
    for(int i=0;i<m;++i){
        cin>>u>>v>>w>>c;
        u-=1;
        v-=1;
        edge temp;
        temp.id = v;
        temp.c = c;
        temp.w = w;
        g[u].e.push_back(temp);
    }
    int s,q;
    cin>>s>>q;
    s-=1;
    dijkstra(s);
    for(int i = 0; i < q; ++i){
        cin>>s;
        s -= 1;
        //cout<<"ans:";
        if(g[s].d == LONG_MAX){
            cout<<(-1)<<endl;
        }
        else cout<<(g[s].d)<<endl;
    }
    return 0;
}
