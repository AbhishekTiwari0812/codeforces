//incomplete
#include <iostream>
using namespace std;

void solve(int *x,int *y){
	
}

int main(){
	int t;
	cin>>t;
	int *x=new int[4];
	int *y=new int[4];
	while(t--){
		for(int i=0;i<4;i++)
			cin>>x[i]>>y[i];
		solve(x,y);
	}
	return 0;
}