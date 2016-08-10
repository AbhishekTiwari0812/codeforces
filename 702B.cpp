#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;++i)
#define fr(i,a,b) for(int i=a;i>=b;--i)
typedef long long int ll;
typedef long double ld;
using namespace std;



int a[100001];

int n;

int bin_search(int left,int right,ll key){
	int mid=(left+right)/2;
	if(left < right-1){
		if(a[mid] >=  key)
			return bin_search(left,mid,key);
		else return bin_search(mid,right,key);
	}
	else{
		/*cout<<"Key "<<key;
		cout<<" Left "<<left<<","<<a[left]<<' ';
		cout<<"Right "<<right<<","<<a[right]<<"\n\n";*/
		if(key == a[left])
			return left;
		else if(key == a[right])
			return right;
		if(key > a[right])
            return right;
		else return left; //a[]
	}
}

int main(){
	cin>>n;
	ll tmp;
	f(i,0,n){
		cin>>tmp;
		a[i]=tmp;
	}
	sort(a,a+n);
	ll max_limit=(ll) (1e10);
	ll count=0;
	f(i,0,n-1){
		ll key=2;
		while(key < max_limit){
			int min_index = bin_search(i+1,n-1,key-a[i]);
			int max_index = bin_search(i+1,n-1,key-a[i]+1);
			/*cout<<"Key is"<<key<<endl;
            cout<<"For i="<<i<<" min="<<min_index<<" max="<<max_index<<endl;*/
			if(a[min_index]+a[i] == key){
				if(a[max_index]+a[i] == key)
					count += (max_index-min_index+1);
				else{
					count += max_index-min_index;
				}
			}
			key *= 2;
		}
	}
	cout<<count<<endl;
}
