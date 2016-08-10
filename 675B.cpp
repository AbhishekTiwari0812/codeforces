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
	lli n;
	cin>>n;

	int a,b,c,d;
	cin>>a>>b>>c>>d;
	lli count=0;
	int y,z,w,t;
	for(int i=1;i<=n;i++){
		y=i-c+b;
		t=y-d+a;
		w=t+c-b;
		if ( y >=1 && y<=n && t>=1 && t<=n && w>=1 && w<=n)
			count++;

 	}
 	cout << (count*n)<<endl;
	return 0;
}
