#include<bits/stdc++.h>

using namespace std;
void SangNT(long long a[],long long n){
	for(long long i=2;i<=n;++i){
		a[i]=1;
	}
	for(long long i=2;i<=n;++i){
		if(a[i]==1){
			for(long long j=i*2;j<=n;j+=i){
				a[j]=0;
			}
		}
	}
}
void Tim(long long a[],long long n){
	long long b=0;
	for(long long i=2;i<=n;++i){
		if(a[i]==1){
			if(a[n-i]==1){
				cout<<i<<" "<<n-i;
				b=1;
				break;
			}
		}
	}
	if(b==0){
		cout<<"-1";
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		long long n;
		cin>>n;
		long long a[n];
		SangNT(a,n);
		Tim(a,n);
		cout<<endl;
		--t;
	}
	return 0;
}
