#include<bits/stdc++.h>

using namespace std;
void dem(string s){
	int count=0;
	for(int i=0;i<s.size();++i){
		int temp=0,temp1=0;
		for(int j=i;j<s.size();++j){
			temp=(temp*10+(s[j]-'0'))%8;
			temp1=(temp1*10+(s[j]-'0'))%3;
			if(temp==0&&temp1!=0){
				++count;
			}
		}
	}
	cout<<count<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		string s;
		cin>>s;
		dem(s);
		--t;
	}
	return 0;
}
