#include<bits/stdc++.h>

using namespace std;
void check(string s){
	s.push_back('5');
	int a[10000],count=1,j=0;
	for(int i=0;i<s.size()-1;++i){
		if(s[i]==s[i+1]){
			++count;
		}
		else{
			a[j++]=count;
			count=1;
		}
	}
	int sum=0;
	for(int i=0;i<j;++i){
		sum+=a[i];
	}
	int x=0;
	for(int i=0;i<j;++i){
		if(a[i]<=(sum-a[i])){
			++x;
		}
	}
	if(x==j){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		string s;
		cin>>s;
		sort(s.begin(),s.end());
		check(s);
		cout<<endl;
		--t;
	}
	return 0;
}
