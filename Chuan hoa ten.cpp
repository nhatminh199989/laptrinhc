#include<bits/stdc++.h>

using namespace std;
void chuanhoa(string s){
	for(int i=0;s[i]==' ';++i){
		s.erase(i,1);
	}
	if(s[0]==' '){
		s.erase(0,1);
	}
	for(int i=0;i<s.size();++i){
		if(s[i]==' '&&s[i+1]==' '){
			s.erase(i+1,1);
			--i;
		}
	}
	if(s[s.size()-1]==' '){
		s.erase(s.size()-1,1);
	}
	int a;
	for(int i=s.size()-1;s[i]!=' ';--i){
		a=i;
		if(s[i]>=97&&s[i]<=122){
			s[i]-=32;
		}
	}
	for(int i=0;i<a;++i){
		if(s[i]>=65&&s[i]<=90){
			s[i]+=32;
		}
	}
	s[0]-=32;
	cout<<s[0];
	for(int i=1;i<a-1;++i){
		if(s[i]==' '){
			s[i+1]-=32;
		}
		cout<<s[i];
	}
	cout<<", ";
	for(a;a<s.size();++a){
		cout<<s[a];
	}
}
int main(){
	string s;
	getline(cin,s);
	chuanhoa(s);
	return 0;
}
