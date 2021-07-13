#include<bits/stdc++.h>

using namespace std;
void count(string s,int k){
	int count=0;
	for(int i=0;i<s.size();++i){
		set<string>a;
		for(int j=i;j<s.size();++j){
			string b;
			b.push_back(s[j]);
			a.insert(b);
			if(a.size()==k){
				++count;
			}
			else if(a.size()>k){
				break;
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
		int k;
		cin>>s>>k;
		count(s,k);
		--t;
	}
	return 0;
}
