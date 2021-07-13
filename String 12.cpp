#include<bits/stdc++.h>

using namespace std;
void tim(string s){
	set<string>a;
	int min=1000005;
	for(int i=0;i<s.size();++i){
		string temp;
		temp=s[i];
		a.insert(temp);
	}
	for(int i=0;i<s.size();++i){
		int j=i;
		int count=0;
		set<string>d;
		d=a;
		while(j<s.size()){
			string b;
			b=s[j];
			if(d.count(b)==1){
				++count;
				d.erase(b);
			}
			if(count==a.size()){
				if(min>j-i+1){
					min=j-i+1;
				}break;
			}
			++j;
		}
	}
	cout<<min<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		string s;
		cin>>s;
		tim(s);
		--t;
	}
	return 0;
}
