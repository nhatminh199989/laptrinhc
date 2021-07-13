#include<bits/stdc++.h>

using namespace std;
void count(string s){
	int n=s.size();
	for(int i=0;i<s.size();++i){
		for(int j=i+1;j<s.size();++j){
			if(s[i]==s[j]){
				++n;
			}
		}
	}
	cout<<n<<endl;
}
int main(){
	short t;
	cin>>t;
	cin.ignore();
	while(t>0){
		string s;
		getline(cin,s);
		count(s);
		--t;
	}
	return 0;
}
