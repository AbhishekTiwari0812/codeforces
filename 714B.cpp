#include <bits/stdc++.h>
#define f(i,a,b) for( int i = ( a ), __ = ( b ); i < __; ++i )
#define fr(i,b,a) for( int i = ( b ), __ = ( a ); i >= __; --i )
#define pb push_back
#define mp make_pair
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<ld> vld;
typedef map<int,int> mii;
typedef map<int,string> mis;
typedef map<string,int> msi;
typedef map<ll,ll> mll;
typedef map<ll,string> mls;
typedef map<string,ll> msl;
typedef set<int> si;
typedef set<string> ss;
typedef set<ll> sll;
typedef set<ld> sld;
typedef pair<int,int> ii;


int main(){
	FastIO
	int n;
	cin>>n;
	map<int,int> m;
	int temp;
	f(i,0,n){
		cin>>temp;
		m[temp]++;
	}	
	if(m.size() > 3){
		cout<<"No\n";
	}
	else if(m.size()==3){
		int a[3];
		int i=0;
		for(map<int,int>::iterator it = m.begin(); it!=m.end();++it){
			a[i++] = it->first;
		}
		int diff1 = a[2]-a[1];
		int diff2 = a[1]-a[0];
		if(diff2 == diff1)
			cout<<"Yes\n";
		else cout<<"No\n";
	}
	else cout<<"Yes\n";
	return 0;
}
