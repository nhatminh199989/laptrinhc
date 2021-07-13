#include<bits/stdc++.h>

using namespace std;
void subtract(string s){
	for(int i=0;i<s.size();++i){
		int a=0;
		for(int j=i+1;j<s.size();++j){
			if(s[i]==s[j]){
				a=1;
				s.erase(j,1);
				--j;
			}
		}
		if(a==1){
			s.erase(i,1);
			--i;
		}
	}
	cout<<s<<endl;
}
int main(){
	short t;
	cin>>t;
	cin.ignore();
	while(t>0){
		string s;
		getline(cin,s);
		subtract(s);
		--t;
	}
	return 0;
}
