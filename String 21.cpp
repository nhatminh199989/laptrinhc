#include<bits/stdc++.h>

using namespace std;
void sum(string s){
	int sum1=0;
	for(int i=0;i<s.size();++i){
		if(s[i]>=48&&s[i]<=57){
			sum1+=(s[i]-'0');
		}	
	}
	sort(s.begin(),s.end());
	for(int i=0;i<s.size();++i){
		if(s[i]<48||s[i]>57){
			cout<<s[i];
		}
	}
	cout<<sum1<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		string s;
		cin>>s;
		sum(s);
		--t;
	}
	return 0;
}
