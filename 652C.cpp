#include <algorithm>
#include <iostream>
using namespace std;
typedef long long lli lli;

struct point{
	lli value;
	bool foe;
	lli next;
	lli index;
};
bool comp(polli a,polli b){
	return a.index < b.index;
}

int main(){
	lli n;
	lli m;
	cin>>n>>m;
	point A[n];
	lli temp;
	for(lli i=0;i<n;i++){
		A[i].value=(i+1);
		A[i].foe=false;
	}

	for(lli i=0;i<n;i++){
		cin>>temp;
		A[temp-1].index=i;
	}
	lli a,b;
	int ID=0;
	for(lli i=0;i<m;i++){
		cin>>a>>b;
		a-=1;
		b-=1;
		A[a].foe=true;
		A[a].next=ID;
		A[b].foe=true;
		A[b].next=ID++;
	}
	sort(A,A+n,comp);
	return 0;
}
