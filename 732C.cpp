#include <iostream>
typedef long long ll;
using namespace std;

int main(){
	ll a[3];
	cin>>a[0]>>a[1]>>a[2];
	ll min_ans = (ll)1e18 + 2;
	if(a[0] == a[1] && a[0] == a[2]){
		cout<<0<<endl;
		return 0;
	}
	if(a[0] > a[1] && a[0] > a[2]){
		ll lunch_miss =  a[0]-1 - a[1];
		ll dinner_miss = a[0]-1 - a[2];
		min_ans = lunch_miss + dinner_miss;
	}
	else if(a[1] > a[0] && a[1] > a[2]){
		ll lunch_miss =  a[1]-1 - a[0];
		ll dinner_miss = a[1]-1 - a[2];
		min_ans = lunch_miss + dinner_miss;
	}
	else if(a[2] > a[0] && a[2] > a[1]){
		ll lunch_miss =  a[2] -1 - a[1];
		ll dinner_miss = a[2] -1 - a[0];
		min_ans = lunch_miss + dinner_miss;
	}
	else if(a[0] == a[1]){
		min_ans = a[0]-1 - a[2];
	}
	else if(a[0] == a[2]){
		min_ans = a[0] - 1 - a[1];
	}
	else if(a[1] == a[2]){
		min_ans = a[1] - 1 - a[0];
	}
	if(min_ans < 0)
        min_ans = 0;
	cout<<min_ans<<endl;
	return 0;
}
