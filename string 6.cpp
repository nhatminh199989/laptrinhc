#include<bits/stdc++.h>

using namespace std;
void summin(string s1,string s2){
	long long sum1=0,sum2=0;
	for(int i=0;i<s1.size();++i){
		if(s1[i]=='6'){
			s1[i]='5';
		}
		sum1=sum1*10+(s1[i]-'0');
	}
	for(int i=0;i<s2.size();++i){
		if(s2[i]=='6'){
			s2[i]='5';
		}
		sum2=sum2*10+(s2[i]-'0');
	}
	cout<<sum1+sum2<<" ";
}
void summax(string s1,string s2){
	long long sum1=0,sum2=0;
	for(int i=0;i<s1.size();++i){
		if(s1[i]=='5'){
			s1[i]='6';
		}
		sum1=sum1*10+(s1[i]-'0');
	}
	for(int i=0;i<s2.size();++i){
		if(s2[i]=='5'){
			s2[i]='6';
		}
		sum2=sum2*10+(s2[i]-'0');
	}
	cout<<sum1+sum2<<" ";
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		string s1,s2;
		cin>>s1>>s2;
		summin(s1,s2);
		summax(s1,s2);
		cout<<endl;
		--t;
	}
	return 0;
}
