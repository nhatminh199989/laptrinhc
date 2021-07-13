#include<bits/stdc++.h>

using namespace std;
void khoitao(int a[],int k){
	for(int i=1;i<=k;++i){
		a[i]=i;
	}
}
void in(int a[],int k){
	for(int i=1;i<=k;++i){
		cout<<a[i];
	}
	cout<<" ";
}
void sinh(int a[],int n,int k,int &stop){
	int i=k;
	while(a[i]==n-k+i){
		--i;
	}
	if(i==0){
		stop=0;
	}
	else{
		a[i]+=1;
	}
	int p=a[i];
	while(i<=k){
		a[++i]=++p;
	}
}
void tohop(int a[],int n,int k){
	int stop=1;
	while(stop==1){
		in(a,k);
		sinh(a,n,k,stop);
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,k,a[100];
		cin>>n>>k;
		khoitao(a,k);
		tohop(a,n,k);
		cout<<endl;
		--t;
	}
	return 0;
}
