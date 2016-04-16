#include <iostream>
using namespace std;


int main(){
	int plus;
	int minus;
	int c;
	while(true){
		cin>>c;
		if(c=='=')
			break;
		else{
			if(c=='+')
				plus++;
			else if(c=='-')
				minus++;
		}
	}
	cin>>c;
	if(c==' ')
		cin>>c;
	int n=c;
	
	
	return 0;
}