#include<bits/stdc++.h>

using namespace std;
int a[25],n,k;
void xuat(){
	for(int i=1;i<=k;++i){
		cout<<a[i];
	}
	cout<<" ";
}
void quaylui(int i){
	for(int j=a[i-1]+1;j<=n-k+i;++j){
		a[i]=j;
		if(i==k){
			xuat();
		}
		else{
			quaylui(i+1);
		}
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		cin>>n>>k;
		a[0]=0;
		quaylui(1);
		cout<<endl;
		--t;
	}
	return 0;
}
