#include <bits/stdc++.h>
#define MOD (int)(1e9+7)
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
typedef set<ll> si;
typedef pair<int,int> ii;


bool cmp(ii a, ii b){
	return a.first < b.first;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	ll m;
	cin>>n>>m;
	ll x,y;
	ll total = n*n;
	ll not_under_attack;
	bool r[(int)1e5+5];
	bool c[(int)1e5+5];
	memset(r,false,sizeof(r));
	memset(c,false,sizeof(c));
	ll rows=0;
	ll columns=0;
	f(i,0,m){
		cin>>x>>y;
		if(r[x]){

		}
		else{
			r[x]=true;
			rows++;
		}
		if(c[y]){

		}
		else{
			c[y]=true;
			columns++;
		}
		not_under_attack=total-(n*rows)-(n*columns)+rows*columns;
		cout<<not_under_attack<<' ';
	}
	cout<<endl;
	return 0;
}
