#include <iostream>
using namespace std;

string s;
int find(int &i){
	int l = 1;
	++i;
	int flag = false;
	int word_count = 0;
	while( l > 0 ){
		if(s[i] == '('){
			if(flag)
				word_count++;
			flag = false;
			l++;
		}
		else if(s[i] == ')'){
			if(flag)
				word_count++;
			flag = false;
			l--;
		}
		else if(s[i] == '_'){
			if(flag)
				word_count++;
			flag = false;
		}
		else{
			flag = true;
		}
		i++;
	}
	i--;
	if(flag)
		word_count++;
	return word_count;
}

int main(){
	int n;
	s = "";
	cin>>n;
	if(n)cin>>s;
	int max_len = 0;
	int len;
	int count = 0;
	int i = 0;
	while( i < s.length()){
		if(s[i] == '('){
			len = 0;
			count += find(i);
		}
		else if(s[i] == '_'){
			len = 0;
		}
		else{
			len++;
			if(len  > max_len){
				max_len = len;
			}
		}
		i++;
	}
	cout<<max_len<<' '<<count<<endl;
	return 0;
}
