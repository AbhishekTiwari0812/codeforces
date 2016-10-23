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
	string s;
	cin>>s;
	int a[26];
	f(i,0,26)
		a[i] = 0;
	if(s.length() <  26){
		cout<<(-1)<<endl;
		return 0;
	}
	int quest = 0;
	f(i,0,26){
		if(s[i] != '?')
			a[s[i]-'a']++;
		else quest++;
	}
	int miss = 0;
	f(i,0,26){
		if(s[i] > 1){
			cout<<(-1)<<endl;
			return 0;
		}
		else if(s[i] == 0){
			miss++;
		}
	}
	if(miss != quest){
		cout<<(-1)<<endl;
		return 0;
	}
	for(int i=26;i<s.length();++i){
		if(s[i-26] == '?'){
			quest--;
		}
		else{
			miss++;
		}
		if(s[i] == '?')
			quest++;
		else{
			if(a[s[i]-'a'] == 0){
				a[s[i]-'a']++;
				miss++;
			}
		}
		if(miss+quest != 26){
			cout<<(-1)<<endl;
			break;
		}
	}	
	return 0;
}
