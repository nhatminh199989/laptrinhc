#include<bits/stdc++.h>

using namespace std;
const long long N=1e9+7;
int a[2005];
int main()
{
	int t;
	cin>>t;
	int i,m,x,j;
	long long sum,n;
	while(t--){
		cin>>m>>x;
		for(j=0;j<m;j++){
			cin>>a[j];
		} 
		m--;
		sum=a[m];
		n=1;
		for(i=m-1;i>-1;i--){
			n=(n*x)%N;
			sum=(sum+n*a[i])%N;
		}
		cout<<sum<<endl;
	}
	return 0;
}
