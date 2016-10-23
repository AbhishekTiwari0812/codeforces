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
	int k;
	int r;
	cin>>k>>r;
	int p = 0;
	int n;
	while(true){
		if ( ( 10 * p ) % k == 0 ){
			n =  ( 10*p ) / k;
			if(n)
				break;
		}
		if ( (10*p + r) % k == 0 ){
			n = (10*p + r) / k;
			break;
		}
		else p++;
	}
	cout<<n<<endl;
	return 0;
}
