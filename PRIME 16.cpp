#include<bits/stdc++.h>

using namespace std;
#define N 1000000
void SNT(int a[],long long n){
	for(int i=2;i<=sqrt(n);++i){
		a[i]=1;
	}
	for(int i=2;i<=sqrt(n);++i){
		if(a[i]==1){
			for(int j=i*2;j<=sqrt(n);j+=i){
				a[j]=0;
			}
		}
	}
}
void Dem(int a[],long long n){
	int dem=0;
	for(int i=2;i<=sqrt(n);++i){
		if(a[i]==1){
			++dem;
		}
	}
	cout<<dem<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		long long n;
		cin>>n;
		int *a=new int[N];
		SNT(a,n);
		Dem(a,n);
		delete[]a;
		--t;
	}
	return 0;
}
