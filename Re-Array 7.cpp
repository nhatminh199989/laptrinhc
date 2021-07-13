#include<bits/stdc++.h>

using namespace std;
bool tmp(string a,string b){
	string c=a.append(b);
	string d=b.append(a);
	if(c>d){
		return true;
	}
	else if(c<d){
		return false;
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		string s[n];
		for(int i=0;i<n;++i){
			cin>>s[i];
		}
		sort(s,s+n,tmp);
		for(int i=0;i<n;++i){
			cout<<s[i];
		}
		cout<<endl;
		--t;
	}
	return 0;
}
