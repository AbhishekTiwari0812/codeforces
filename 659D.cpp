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
struct point {
	int x;
	int y;
};

struct turn{
	point a;
	point b;
	point c;
};

int dan(turn &t){

}
int check(point a,point b,point c){
	if((a.y==b.y )&& (b.x > a.x))
		if((b.x==c.x )&&( c.y > b.y))
			return 1;
	if((a.x==b.x )&&(a.y > b.y)&&(b.y==c.y) &&(c.x >b.x))
		return 1;
	if((a.y==b.y)&&(a.x>b.x)&& (b.x==c.x)&&(b.y>c.y))
		return 1;
	if((a.x==b.x)&&(b.y > a.y )&&(b.y==c.y)&&(b.x> c.x))
		return 1;
	return 0;


}
int main(){
	ios_base::sync_with_stdio(false);
	int test=1;
	//cin>>test;
	while(test--){
		int n;
		cin>>n;
		point A[n+1];
		int x,y;
		for(int i=0;i<n+1;i++){
			cin>>x>>y;
			A[i].x=x;
			A[i].y=y;
		}
		int count=0;
		for(int i=0;i<n-1;i++){
			count+=check(A[i],A[i+1],A[i+2]);
		}
		cout<<count<<endl;
	}
	return 0;
}
