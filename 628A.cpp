#include <cmath>
#include <iostream>
using namespace std;
typedef long long int lli;
int b;
lli count_bottles(int partipants){
	if(partipants==1)
		return 0;
	lli power=(1<<(int)floor(log2(partipants)));
	cout<<power<<endl;
	int next_round_number=count_bottles(power/2+partipants-power);
	return next_round_number+b*partipants+1;
}
int main(){
	int n,p;
	cin>>n>>b>>p;
	cout<<count_bottles(n)<<" "<<(n*p)<<endl;
	return 0;
}
