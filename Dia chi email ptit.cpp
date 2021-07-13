#include<bits/stdc++.h>

using namespace std;
void create(string s){
	for(int i=s.size()-1;s[i]==' ';--i){
		if(s[i]==' '){
			s.erase(i,1);
		}
	}
	int a;
	for(int i=s.size()-1;;--i){
		if(s[i]==' '){
			a=i;
			for(int j=i+1;j<s.size();++j){
				cout<<s[j];
			}
			break;
		}
	}
	if(s[0]!=' '){
		cout<<s[0];
	}
	for(int i=0;i<a;++i){
		if(s[i]==' '&&s[i+1]!=' '){
			cout<<s[i+1];
		}
	}
}
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();++i){
		if(s[i]>=65&&s[i]<=90){
			s[i]+=32;
		}
	}
	create(s);
	cout<<"@ptit.edu.vn";
	return 0;
}
