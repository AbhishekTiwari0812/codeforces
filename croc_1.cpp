#include <iostream>
#include <stack>
using namespace std;

int main(){
	int n,a,b;
	cin>>n>>a>>b;
	int even,odd;
	if(n&1){
		odd=n;
		even=n-1;
	}else{
		odd=n-1;
		even=n;
	}
	int **A=new int*[a];
	for(int i=0;i<a;i++)
		A[i]=new int[b];
	for(int i=0;i<a;i++)
		for(int j=0;j<b;j++)
			if((i%2==1 && j%2==1)||(i%2==0 && j%2==0)){
				if(odd<=0)
					odd=0;
				A[i][j]=odd;
				//cout<<"odd:"<<odd<<endl;
				odd-=2;

			}
			else{
				if(even<=0)
					even=0;
				A[i][j]=even;
				//cout<<"even:"<<even<<endl;
				even-=2;
			}

	if(odd >0 || even >0)
		cout<<(-1)<<endl;
	else{
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++)
				cout<<A[i][j]<<" ";
			cout<<endl;
		}
	}

	return 0;
}