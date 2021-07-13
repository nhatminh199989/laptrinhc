#include<bits/stdc++.h>

using namespace std;
void check(string s,int k){
	set<string>a;
	string s1;
	for(int i=0;i<s.size();++i){
		s1=s[i];
		a.insert(s1);
	}
	if(a.size()+k>=26){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
}
int main(){
	short t;
	cin>>t;
	cin.ignore();
	while(t>0){
		string s;
		int k;
		getline(cin,s);
		cin>>k;
		cin.ignore();
		check(s,k);
		cout<<endl;
		--t;
	}
	return 0;
}
