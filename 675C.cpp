//incomplete
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <map>
#include <set>
#include <queue>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstdio>
using namespace std;
typedef long long int lli;
typedef unsigned long long int ull;
typedef long double ld;

struct node{
	lli value;
	node *l;
	node *r;
	node *p;
	bool is_right;
	lli min_range;
	lli max_range;
};

class compare{
public:
	bool operator()(const node *(&a), const node *(&b)) const{
		return a->max_range < b->max_range;
	}
};

set < node *,compare> s;

node *find_parent(node *current){
	set<node *,compare>::iterator it;
	it=s.upper_bound(current);
	return (*it);
}

int add_new_node(int value){
	node *new_node=new node;
	new_node->value=value;
	node_node->max_range=value;
	node *parent = find_parent(current);

	//then add it to the set
	//decide the range.
	if(current->value > parent->value){
		current->is_right=true;
		s.erase(parent);
		current->max_range=parent->max_range;
		current->min_range=parent->value;
	}
}

int main(){

	return 0;
}
