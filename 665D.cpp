#include <bits/stdc++.h>
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

typedef long long int lli;
typedef long double ld;
typedef unsigned long long int ull;



using namespace std;
bool *prime;

void SieveOfEratosthenes(int n){
    for(int i=0;i<=n;i++)
        prime[i]=true;
    for (int p=2; p*p<=n; p++){
        if (prime[p] == true){
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    /*for(int i=0;i<=n;i++)
        cout<<i<<" is"<<prime[i]<<endl;*/
}

bool check_prime(int a){
    if(a==2)
        return true;
    for(int i=2;i<sqrt(a)+1;i++)
        if(a%i==0)
            return false;
    return true;
}
int main(){
	ios_base::sync_with_stdio(false);
	int test;
	test=1;
	while(test--){
		int s;
		cin>>s;
		int *A=new int[s];
		for(int i=0;i<s;i++)
            cin>>A[i];
		sort(A,A+s);
        if(s>1){
            int n =A[s-1]+A[s-2]+1;
            prime=new bool[n+1];
            SieveOfEratosthenes(n);
        }
        else{
            if(check_prime(A[0]))
                cout<<1<<endl<<A[0]<<endl;
            else cout<<0<<endl;
            continue;
        }
		bool flag=false;
		for(int i=0;i<s;i++){
			for(int j=i+1;j<s;j++){
				if(prime[A[i]+A[j]]){
					cout<<2<<endl<<A[i]<<" "<<A[j]<<endl;
					flag=true;
					break;
				}

			}
					if(flag)
					break;
		}
		if(!flag){
			for(int i=0;i<s;i++){
				if(prime[A[i]]){
					cout<<1<<endl<<A[i]<<endl;
					flag=true;
					break;
				}
			}
		}
		if(!flag)
			cout<<0<<endl;

	}
	return 0;
}
