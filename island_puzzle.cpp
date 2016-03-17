#include <iostream>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

string check(int *A,int *B,int size){

	int index1;
	int index2;
	rep(i,size){
		if(A[i]==1){
			index1=i;
			break;
		}
	}
	rep(i,size){
		if(B[i]==1){
			index2=1;
			break;
		}
	}
	int count=0;
	int i=index1;
	int j=index2;
	while(count<size){
		//cout<<A[i]<<" "<<B[j]<<endl;
		if(A[i]==B[j]){
			i++;
			j++;
		}
		else return "No\n";
		i%=size;
		j%=size;

		count++;
	}
	return "Yes\n";
}

int main(){
	int n;
	cin>>n;
	int *A=new int[n-1];
	int *B=new int[n-1];
	int temp;
	int k=0;
	rep(i,n){
		cin>>temp;
		if(temp==0);
		else
			A[k++]=temp;
	}
	k=0;
	rep(i,n){
		cin>>temp;
		if(temp==0);
		else
			B[k++]=temp;
	}
	cout<<check(A,B,n-1);
	return 0;
}