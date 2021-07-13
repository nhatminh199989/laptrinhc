#include<bits/stdc++.h>

using namespace std;
void add(string s1,string s2){
	string s;
	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());
	int carry=0;
	for(int i=0;i<s1.size();++i){
		int d=(s1[i]-'0')+(s2[i]-'0')+carry;
		carry=0;
		if(d>=10){
			d%=10;
			carry=1;
		}
		s.push_back(d+'0');
	}
	if(carry>0){
		s.push_back(carry+'0');
	}
	reverse(s.begin(),s.end());
	cout<<s<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		string s1,s2;
		cin>>s1>>s2;
		if(s1.size()<s2.size()){
			swap(s1,s2);
		}
		int n=s1.size()-s2.size();
		for(int i=1;i<=n;++i){
			s2.insert(0,"0");
		}
		add(s1,s2);
		--t;
	}
	return 0;
}
