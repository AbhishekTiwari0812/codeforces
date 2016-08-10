#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;++i)
#define fr(i,a,b) for(int i=a;i>=b;--i)
typedef long long int ll;
typedef long double ld;
using namespace std;

int a[100001];
int b[100001];

int closest(int left,int right,int key){
	int mid=(left+right)/2;
	if(left < right - 1){
		if(b[mid] < key)
			return closest(mid,right,key);
		else
			return closest(left,mid,key);
	}
	else{
		int r1=abs(key-b[left]);
		int r2=abs(key-b[right]);
		return min(r1,r2);
	}
}


int main(){
	int n;
	int m;
	cin>>n>>m;
	f(i,0,n)
		cin>>a[i];
	f(i,0,m)
		cin>>b[i];

	sort(a,a+n);
	sort(b,b+m);
	int max_needed=-1;
	f(i,0,n){
		int	temp = closest(0,m-1,a[i]);
		//cout<<"for "<<a[i]<<" ans="<<temp<<endl;
		if(temp > max_needed)
			max_needed=temp;
	}
	cout<<max_needed<<endl;
	return 0;
}
