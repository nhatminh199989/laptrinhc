#include<bits/stdc++.h>

using namespace std;
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,m,temp,site;
		cin>>n>>m;
		for(int i=1;i<=n;++i){
			cin>>temp;
			if(temp==m){
				site=i;
			}
		}
		cout<<site<<endl;
		--t;
	}
	return 0;
}
