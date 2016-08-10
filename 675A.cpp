#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <map>
#include <set>
#include <queue>
#include <cmath>
#include <cstdlib>
#include <cstdio>
using namespace std;
typedef long long int lli;
typedef unsigned long long int ull;
typedef long double ld;


int main(){
	double a,t,d;
	cin>>a>>t>>d;
	double f = (t-a)/(d) + 1.0;
	int k = ceil(f);
	if ( d==0 && a==t){
		cout<<"YES"<<endl;
		return 0;
	}

	if ( k == f && f >0) 
		cout << "YES" <<endl;
	else cout << "NO" <<endl;	
	return 0;
}
