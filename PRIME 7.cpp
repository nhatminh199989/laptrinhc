#include<bits/stdc++.h>

using namespace std;
void check(int n){
	set<int>s;
	vector<int>a;
	for(int i=2;i<=sqrt(n);++i){
		while(n%i==0){
			s.insert(i);
			a.push_back(i);
			n/=i;
		}
	}
	if(n>1){
		s.insert(n);
		a.push_back(n);
	}
	if(s.size()==a.size()&&s.size()==3){
		cout<<"1"<<endl;
	}
	else{
		cout<<"0"<<endl;
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		check(n);
		--t;
	}
	return 0;
}
