#include<bits/stdc++.h>

using namespace std;
const long long N=1e9+7;
int a[1005][1005];
void tinh(int n,int r){
	for(int i=0;i<=n;++i){
		for(int j=0;j<=i;++j){
			if(i==j||j==0){
				a[i][j]=1;
			}
			else{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
				int b=a[i][j]%N;
				a[i][j]=b;
			}
		}
	}
	cout<<a[n][r]<<endl;
}
int main(){
	short t;
	cin>>t;
	while(t>0){
		int n,r;
		cin>>n>>r;
		tinh(n,r);
		--t;
	}
	return 0;
}
