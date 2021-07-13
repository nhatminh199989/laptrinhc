#include<bits/stdc++.h>

using namespace std;
void khoitao(int a[],int n){
	for(int i=0;i<n;++i){
		a[i]=0;
	}
}
void xuat(int a[],int n){
	int b[n];
	for(int i=0;i<n;++i){
		b[i]=a[i];
	}
	for(int i=n-2;i>=0;--i){
		if(b[i]==1){
			if(b[i+1]==1){
				b[i+1]=0;
			}
			else{
				b[i+1]=1;
			}
		}
	}
	for(int i=0;i<n;++i){
		cout<<b[i];
	}
	cout<<" ";
}
void kt(int a[],int &stop,int n){
	int i=n-1;
	while(i>=0&&a[i]==1){
		--i;
	}
	if(i==-1){
		stop=1;
	}
	else{
		a[i]=1;
		for(int j=i+1;j<n;++j){
			a[j]=0;
		}
	}
}
void sinh(int a[],int n){
	int stop=0;
	while(stop==0){
		xuat(a,n);
		kt(a,stop,n);
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		int a[n];
		khoitao(a,n);
		sinh(a,n);
		cout<<endl;
		--t;
	}
	return 0;
}
