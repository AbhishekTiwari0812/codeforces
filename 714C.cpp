#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;



int find(string s){
	int ans = 0;
	for(int i = 0; i < s.length(); ++i){
		ans += ((s[i]-'0')%2)?1:0;
		ans <<= 1;
	}
	return ans>>1;
}

ll change(string s){
    ll num = 0;
    ll Pow = 1;
    for(int i=s.length()-1;i>=0;--i){
        num += (s[i]-'0' )*Pow;
        Pow *= 10;
    }
    return num;
}

int main(){
	int *store=new int[(1<<19)];
	int t;
	cin>>t;
	char c;
	string num;
	memset(store,0,(1<<18)*sizeof(int));
	while(t--){
		cin>>c;
		cin>>num;
		int pat = find(num);
		if(c=='+'){
			store[pat]++;
		}
		else if(c=='-'){
			store[pat]--;
		}
		else{
			cout<<store[pat]<<endl;
		}
	}
}
