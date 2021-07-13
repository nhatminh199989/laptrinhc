#include<bits/stdc++.h>

using namespace std;
#define N 1000
void input(int a[N],int n){
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
}
bool fibonacci(int x){
	if(x<=3){
		return 1;
	}
	else{
		int f0=0,f1=1,fn=0;
		while(fn<x){
			fn=f0+f1;
			f0=f1;
			f1=fn;
		}
		if(fn==x){
			return 1;
		}
		else{
			return 0;
		}
	}
}
void LK(int a[N],int n){
	for(int i=0;i<n;++i){
		if(fibonacci(a[i])==1){
			cout<<a[i]<<" ";
		}
	}
	cout<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n;
		int *a=new int[N];
		cin>>n;
		input(a,n);
		LK(a,n);
		--t;
	}
	return 0;
}
