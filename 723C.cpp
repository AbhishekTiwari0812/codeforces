#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
typedef vector<ii> vii;

int main(){
	int n,m;
	cin>>n>>m;
	int temp;
	int a[2001];
	int b[2001];
	int count;
	for(int i=0;i<n;++i){
		cin>>temp;
		b[i] = temp;
		if(temp <= m ){
			a[temp]++;
		}
		else{
			count++;	
		}
	}
	int ans2 = count;
	priority_queue<ii,vii,greater> q;
	for(int i=0;i<m;++i){
		q.push(make_pair(a[i],i));
	}
	while(count > 0){
		ii temp = q.top();
		q.pop();
		count--;
		temp.first++;
		q.push(temp);
	}
	for(int i=0;i<m;++i){
		a[i] = 0;
	}
	while(!q.empty()){
		ii temp = q.top();
		q.pop();
		a[temp.second] = a.first;
	}
	int j = 0;
	for(int i=0;i<n;++i){
		if(b[i] <= m ){
			cout<<b[i]<<' ';
		}
		else{
			while(a[j]==0){
				j++;
			}
			cout<<(j+1) <<' ';
			a[j]--;
		}
	}
	return 0;
}