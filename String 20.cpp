#include<bits/stdc++.h>

using namespace std;
void dao(string s){
	stringstream s1(s);
	string token;
	string s2[100];
	int i=0;
	while(getline(s1,token,' ')){
		s2[i++]=token;
	}
	for(int j=i-1;j>=0;--j){
		cout<<s2[j]<<" ";
	}
	cout<<endl;
}
int main(){
	short t;
	cin>>t;
	cin.ignore();
	while(t>0){
		string s;
		getline(cin,s);
		dao(s);
		--t;
	}
	return 0;
}
