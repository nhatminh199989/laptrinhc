#include<bits/stdc++.h>

using namespace std;
int main(){
	short t;
	cin>>t;
	cin.ignore();
	while(t>0){
		string s;
		long long a,sum=0;
		cin>>s;
		cin>>a;
		for(int i=0;i<s.size();++i){
			sum=(sum*10+(s[i]-'0'))%a;
		}
		cout<<sum<<endl;
		--t;
	}
	return 0;
	
}
