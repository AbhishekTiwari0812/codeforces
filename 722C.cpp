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

struct node{
	int id;
	ll left;
	ll right;
};

class cmp{
public:
	bool operator()(const node &a, const node &b)const{
		return a.id < b.id;
	}
};

int main(){
	FastIO
	int n;
	cin>>n;
	ll a[(int)1e5+3];
	ll b[(int)1e5+3];
	ll s[(int)1e5+3];
	f(i,0,n){
		cin>>a[i];
		if(i)
			s[i] += s[i-1]+a[i];
		else s[i] = a[i];
	}	
	f(i,0,n)
		cin>>b[i];
	set<node,cmp> s;
	f(i,0,n){
		node temp;
		temp.id = b[i];
		set<node,cmp>::iterator it = s.lower_bound(temp);
		node temp1 = (*it);
		it++;
		node temp2 = (*it);
	}
	return 0;
}
