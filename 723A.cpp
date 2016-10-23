#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[3];
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	int min = INT_MAX;
	for(int i=a[0]; i <=a[2]; ++i){
		int temp = 0;
		for(int j=0;j<3;++j){
			temp += abs(i-a[j]);
		}
		if(temp < min)
			min = temp;
	}
	cout<<min<<endl;
	return 0;
}
