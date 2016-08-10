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
int FINAL;

void print_string(int n){
	if(n==FINAL){
		if(n%2==0)
			cout<<"I love it\n";
		else cout<<"I hate it\n";
	}
	else{
		if(n%2==1){
			cout<<"I hate that ";
		}
		else cout<<"I love that ";
		print_string(n+1);
	}
}

int main(){
	cin>>FINAL;
	print_string(1);
	return 0;
}
