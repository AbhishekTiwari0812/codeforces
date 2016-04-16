#include <iostream>
#include <vector>
#include <fstream>
#include <set>
#include <map>
#include <algorithm>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <climits>

#define MOD (int)(1e9+7)
#define f(i,a,b) for(int i=a;i<b;i++)

typedef long long int lli;
typedef long double ld;
typedef unsigned long long int ull;

using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	int test;
//	cin>>test;
	test=1;
	while(test--){
		int n,w;
		cin>>n>>w;
		int A[n];
		for(int i=0;i<n;i++)
			cin>>A[i];
		sort(A,A+n);
		long sum=0;
		long have=w;
		int current=0;
		vector<int> all_ans;
		for(int i=1;i<=w;i++){
			if(A[current]==i){		//if alread has
				current++;
			}else{
				if(have - i < 0)
					break;		//can not take it
				else{
					all_ans.push_back(i);
					have-=i;
				}
			}
		}
		int ans=all_ans.size();
		cout<<ans<<endl;
		for(int i=0;i<ans;i++)
            cout<<all_ans[i]<<" ";
        cout<<endl;

	}
	return 0;
}
