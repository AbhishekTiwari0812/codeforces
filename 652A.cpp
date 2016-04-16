#include <algorithm>
#include <iostream>
using namespace std;

void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
bool check(int *A,int n){
	for(int i=1;i<n;i++){
		if(i&1){
			if(!(A[i] >= A[i-1]))
				return false;
		}else{
			if(!(A[i] <= A[i-1]))
				return false;
		}
	}
	return true;
	
}
int main(){
	int n;
	cin>>n;
	int *A;
	A=new int[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	sort(A,A+n);
	for(int i=1;i<n-1;i+=2){
		swap(A[i],A[i+1]);
	}
	if(check(A,n)){
		for(int i=0;i<n;i++)
			cout<<A[i]<<" ";
		cout<<endl;
	}
	else cout<<"Impossible"<<endl;
	return 0;
}