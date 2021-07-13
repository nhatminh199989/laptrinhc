#include<bits/stdc++.h>

using namespace std;
string s;
int n;
void output(){
	cout<<s<<" ";
}
void check(int &stop){
	int i=n-1;
	while(i>=0&&s[i]=='B'){
		--i;
	}
	if(i==-1){
		stop=1;
	}
	else{
		s[i]='B';
		for(int j=i+1;j<n;++j){
			s[j]='A';
		}
	}
}
void generate(){
	int stop=0;
	while(stop==0){
		output();
		check(stop);
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		cin>>n;
		for(int i=0;i<n;++i){
			s.push_back('A');
		}
		generate();
		cout<<endl;
		s.clear();
		--t;
	}
	return 0;
}

