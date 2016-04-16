#include <iostream>
#include <vector>
#include <fstream>
#include <set>
#include <map>
#include <algorithm>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <climits>

#define MOD (int)(1e9+7)
#define f(i,a,b) for(int i=a;i<b;i++)

typedef long long int lli;
typedef long double ld;
typedef unsigned long long int ull;

using namespace std;

void solve(int n,int a,int b){
	a+=b;
	a+= n*10000;
	a%=n;
	if(a==0)
		cout<<n<<endl;
	else cout<<a<<endl;
	//cout<<(a%n)<<endl;

}
int main(){
	int test;
	test=1;
	//cin>>test;
	while(test--){
		int n,a,b;
		cin>>n>>a>>b;
		solve(n,a,b);

	}
	return 0;
}
