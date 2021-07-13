#include<bits/stdc++.h>

using namespace std;
void loaibo(string s){
	int i=0,count=0;
	while(i<s.size()-1){
		if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='0'){
			s.erase(i,3);
			++count;
			i=0;
		}
		else{
			++i;
		}
	}
	cout<<count*3<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		string s;
		cin>>s;
		loaibo(s);
		--t;
	}
	return 0;
}
