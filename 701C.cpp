#include <bits/stdc++.h>
#define MOD (int)(1e9+7)
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
typedef set<ll> si;
typedef pair<int,int> ii;

int ind(char c){
	if( c >= 'a' && c<='z' )
		return c-'a';
	else return c-'A'+26;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	string s;
	cin>>n;
	cin>>s;
	int a[52];
	memset(a,0,sizeof(a));
	f(i,0,n)
		a[ind(s[i])]=1;
	int count=0;
	f(i,0,52)
		count+=a[i];
	int start=0;
	int end=-1;
	int unique=0;
	int Min = INT_MAX;
	int helper[52];
	int length;
	memset(helper,0,sizeof(helper));
	while(true){
		if(unique >= count && start < end){
			length = end-start+1;
			if(length < Min)
				Min=length;
			start++;
			if(start == n)
				break;
			helper[ind(s[start])]--;
			if(helper[ind(s[start])]==0)
					unique--;
		}
		else{
			end++;
			if(end==n)
				break;
			if(helper[ind(s[end])]==0)
				unique++;
			helper[ind(s[end])]++;

		}
	}
    cout<<Min<<endl;
	return 0;
}
