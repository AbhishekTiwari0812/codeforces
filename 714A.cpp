#include <iostream>

using namespace std;


int main(){
	long long l1,r1,l2,r2,k;
	cin>>l1>>r1>>l2>>r2>>k;
	long long s=max(l1,l2);
	long long e=min(r1,r2);
	if(s<=e){	
		if(s<=k && k<=e)
			cout<<e-s<<endl;
		else
			cout<<(e-s+1)<<endl;
	}
	else
		cout<<0<<endl;
	return 0;
}