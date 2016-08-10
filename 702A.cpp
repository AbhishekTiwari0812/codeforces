#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;++i)
#define fr(i,a,b) for(int i=a;i>=b;--i)
typedef long long int lli;
typedef long double ld;

using namespace std;

int main(){
	int n;
	int a[100001];
	cin>>n;
	f(i,0,n)
		cin>>a[i];
	int max=1;
	int count=1;
	f(i,1,n){
		if(a[i] > a[i-1]){
			count++;
			if(count > max)
				max=count;
		}
		else count=1;
	}
	cout<<max<<endl;
	return 0;
}
