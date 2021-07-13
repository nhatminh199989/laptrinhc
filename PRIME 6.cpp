#include<bits/stdc++.h>

using namespace std;
void SNT(int a[],int n){
	for(int i=2;i<=n;++i){
		a[i]=1;
	}
	for(int i=2;i<=n;++i){
		if(a[i]==1){
			for(int j=i*2;j<=n;j+=i){
				a[j]=0;
			}
		}
	}
	for(int i=2;i<=n;++i){
		if(a[i]==1&&a[n-i]==1){
			cout<<i<<" "<<n-i<<endl;
			break;
		}
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		int a[n+5];
		SNT(a,n);
		--t;
	}
	return 0;
}
