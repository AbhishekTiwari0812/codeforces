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

int main(){
	int test;
	cin>>test;
	long total=0;
	int temp;
	while(test--){
		cin>>temp;
		temp-=1;
		total+=temp;
		if(total%2==0)
			cout<<2<<endl;
		else cout<<1<<endl;
	}
	return 0;
}