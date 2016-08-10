#include <bits/stdc++.h>
#define MOD (int)(1e9+7)
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
typedef pair<int,int> ii;


bool cmp(ii a, ii b){
	return a.first < b.first;
}

int main(){
	int n;
	ii a[101];
	cin>>n;
	ll sum=0;
	f(i,0,n){
		cin>>(a[i].first);
		a[i].second=i+1;
	}
	sort(a,a+n,cmp);
	f(i,0,n/2){
		cout<<(a[i].second)<<' '<<(a[n-i-1].second)<<'\n';
	}

	return 0;
}
