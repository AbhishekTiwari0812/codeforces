#include <climits>
#include <vector>
#include <iostream>
using namespace std;
typedef long long int lli;
int main(){

	int n;
    lli a=INT_MAX;
	lli temp;
	lli sum=0;
    cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		sum+=temp;
		if(temp < a && (temp&1))	//odd
			a=temp;
	}
	if(sum&1)
		sum-=a;
	cout<<sum<<endl;
	return 0;
}
