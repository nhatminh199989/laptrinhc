#include<bits/stdc++.h>

using namespace std;
void khoitao(int a[],int n){
	for(int i=1;i<=n;++i){
		a[i]=i;
	}
}
void in(int a[],int n){
	for(int i=1;i<=n;++i){
		cout<<a[i];
	}
	cout<<" ";
}
void sinh(int &stop,int n,int a[]){
	int i=n-1;
	while(i>0&&a[i]>a[i+1]){
		--i;
	}
	if(i==0){
		stop=0;
	}
	else{
		int k=n;
		for(k;k>=1;--k){
			if(a[i]<a[k]){
				swap(a[i],a[k]);
				break;
			}
		}
		int c=i+1;
		k=n;
		while(c<k){
			swap(a[c],a[k]);
			c++;
			--k;
		}
	}
}
void hoanvi(int a[],int n){
	int stop=1;
	do{
		in(a,n);
		sinh(stop,n,a);
	}while(stop==1);
	cout<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,a[100];
		cin>>n;
		khoitao(a,n);
		hoanvi(a,n);
		--t;
	}
	return 0;
}
