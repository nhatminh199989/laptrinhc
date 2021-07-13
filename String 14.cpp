#include<bits/stdc++.h>

using namespace std;
void dem(string s){
	stringstream s1(s);
	string token;
	int i=0;
	char s2[]={' ','\t','\n'};
	while(getline(s1,token,s2[4])){
		++i;
	}
	cout<<i<<endl;
}
int main(){
	short t;
	cin>>t;
	cin.ignore();
	while(t>0){
		string s;
		getline(cin,s);
		dem(s);
		--t;
	}
	return 0;
}
