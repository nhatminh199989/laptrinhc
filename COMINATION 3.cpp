#include<bits/stdc++.h>

using namespace std;
int a[25],check[25]={0},n;
void xuat(){
	for(int i=1;i<=n;++i){
		cout<<a[i];
	}
	cout<<" ";
}
void quaylui(int i){
	for(int j=1;j<=n;++j){
		if(check[j]==0){
			a[i]=j;
			check[j]=1;
			if(i==n){
				xuat();
			}
			else{
				quaylui(i+1);
			}
			check[j]=0;
		}
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		cin>>n;
		quaylui(1);
		cout<<endl;
		--t;
	}
	return 0;
}
