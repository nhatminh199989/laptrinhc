#include<bits/stdc++.h>

using namespace std;
int main(){
	short t;
	cin>>t;
	while(t>0){
		string n;
		int a=0;
		cin>>n;
		int i=n.size()-1;
		for(i;i>0;--i){
			if((n[i]-'0')<(n[i-1])-'0'){
				break;
			}
			else{
				++a;
			}
		}
		if(a==n.size()-1){
			cout<<"-1";
		}
		else{
			int min=n[i]-'0',x=i;
			int max=n[i-1]-'0';
			for(int j=i;j<n.size();++j){
				if((n[j]-'0')<max&&(n[j]-'0')>min){
					x=j;
				}
			}
			swap(n[i-1],n[x]);
			cout<<n;
		}
		cout<<endl;
		--t;
	}
	return 0;
}
