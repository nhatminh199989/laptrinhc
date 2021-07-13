#include<bits/stdc++.h>

using namespace std;
#define N 1000005
int a[N];
void SNT(int a[]){
	for(int i=2;i<=N;++i){
		a[i]=1;
	}
	for(int i=2;i<=N;++i){
		if(a[i]==1){
			for(int j=i*2;j<=N;j+=i){
				a[j]=0;
			}
		}
	}
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		SNT(a);
		long long L,R;
		cin>>L>>R;
		if(L>R){
			swap(L,R);
		}
		int count=0;
		for(int i=sqrt(L);i<=sqrt(R);++i){
			if(a[i]==1){
				++count;
			}
		}
		cout<<count<<endl;
		--t;
	}
	return 0;
}
