#include<bits/stdc++.h>

using namespace std;
void check(string s){
	int a=0;
	for(int i=0;i<s.size();++i){
		a=(2*a+(s[i]-'0'))%5;
	}
	if(a==0){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		string s;
		cin>>s;
		check(s);
		cout<<endl;
		--t;
	}
	return 0;
}

