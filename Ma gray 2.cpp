#include<bits/stdc++.h>

using namespace std;
int main(){
	short t;
	cin>>t;
	while(t>0){
		string s;
		cin>>s;
		for(int i=0;i<s.size()-1;++i){
			if(s[i]=='1'){
				if(s[i+1]=='1'){
					s[i+1]='0';
				}
				else{
					s[i+1]='1';
				}
			}
		}
		cout<<s<<endl;
		--t;
	}
	return 0;
}
