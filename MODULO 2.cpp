#include<bits/stdc++.h>

using namespace std;
int main(){
	short t;
	cin>>t;
	while(t>0){
		int a,m,j=-1;
		cin>>a>>m;
		for(int i=0;i<=m-1;++i){
			if(i*a%m==1){
				j=1;
				cout<<i<<endl;
				break;
			}
		}
		if(j==-1){
			cout<<j<<endl;
		}
		--t;
	}
	return 0;
}
