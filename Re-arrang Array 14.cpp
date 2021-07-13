#include<bits/stdc++.h>

using namespace std;
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,k;
		cin>>n>>k;
		int a[n*k];
		for(int i=0;i<n*k;++i){
			cin>>a[i];
		}
		sort(a,a+n*k);
		for(int i=0;i<n*k;++i){
			cout<<a[i]<<" ";
		}
		cout<<endl;
		--t;
	}
	return 0;
}
