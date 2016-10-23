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
	//FastIO
	string s;
	cin>>s;
	int x = 0;
	int y = 0;
	int countl = 0;
	int countr = 0;
	int countu = 0;
	int countd = 0;
	f(i,0,s.length()){
		if(s[i]== 'L'){
			countl++;
			x--;
		}
		else if(s[i]=='R'){
			countr++;
			x++;
		}
		else if(s[i]=='U'){
			countu++;
			y++;
		}
		else if(s[i]=='D'){
			countd++;
			y--;
		}
	}
	if(!x && !y){
		cout<<0<<endl;
		return 0;
	}
	int  p =abs(x);
	int q = abs(y);
	if( p%2 ^ q%2){
		cout<<(-1)<<endl;
		return 0;
	}
	int ans=0;
	if(countl > countr){
		int mid =  (countl - countr)/2;
		ans += mid;
		countl -= mid;
		countr += mid;
	}
	else{
		int mid =  (countr - countl)/2;
		ans += mid;
		countr -= mid;
		countl += mid;
	}
	if(countu > countd){
		int mid =  (countu - countd)/2;
		ans += mid;
		countu -= mid;
		countd += mid;
	}
	else{
		int mid =  (countd - countu)/2;
		ans += mid;
		countd -= mid;
		countu += mid;
	}
	if(abs(countl - countr)==1 && abs(countu - countd)==1)
		ans++;
	else cout<<(-1)<<endl;
	cout<<ans<<endl;
	return 0;
}
