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
#define fi(i,a,b) for(int i=a; i>=b ; i--)

typedef long long int lli;
typedef long double ld;
typedef unsigned long long int ull;

using namespace std;

int main(){
	int n,q;
	string s;
	cin>>s;
	int l=s.length();
	int **A=new int*[l];
	f(i,0,26){
		A[i]=new int[26];
		f(j,0,26)
			A[i][j]=0;
	}
	int **B=new int*[l];
	f(i,0,26){
		B[i]=new int[26];
		f(j,0,26)
			B[i][j]=0;
	}
	f(i,0,l){
		A[i][s[i]-'a']++;
	}
	fi(i,l-1,0){
		B[i][s[i]-'a']++;
	}
	int i,j,k;
	while(q--){
		cin>>i>>j>>k;
	}
	return 0;
}