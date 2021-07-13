#include<bits/stdc++.h>

using namespace std;
void xuat(int a[],int n,int k){
	for(int i=1;i<=n;++i){
		int check=1;
		for(int j=i;j<i+k,j<=n;++j){
			if(a[j]==1){
				check=0;
			}
		}
		if(check==1){
			for(int j=1;j<=n;++j){
				cout<<a[j];
			}
			cout<<endl;
			break;
		}
	}
}
void quaylui(int a[],int n,int i,int k){
	for(int j=0;j<=1;++j){
		a[i]=j;
		if(i==n){
			xuat(a,n,k);
		}
		else{
			quaylui(a,n,i+1,k);
		}
	}
}
int main(){
	int n,k;
	cin>>n>>k;
	int a[25];
	quaylui(a,n,1,k);
	cout<<endl;
	return 0;
}
